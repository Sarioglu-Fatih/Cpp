/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:49:02 by fsariogl          #+#    #+#             */
/*   Updated: 2023/09/06 12:52:18 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	parsing(const std::string &av)
{
	std::string		line;
	DIR				*directory = opendir(av.c_str());

	if (directory)
	{
		closedir(directory);
		std::cerr << "Error: could not open directory." << std::endl;
		return (false);
	}

	std::ifstream	myfile(av.c_str());

	if (!myfile.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (false);
	}
	myfile.close();
	return (true);
}

bool	format(const std::string str)
{
	std::string	nb = "0123456789";
	std::size_t found = str.substr(0, 4).find_first_not_of(nb);
	if (found != std::string::npos)
		return (false);
	found = str.substr(4, 1).find_first_not_of("-");
	if (found != std::string::npos)
		return (false);
	found = str.substr(5, 2).find_first_not_of(nb);
	if (found != std::string::npos)
		return (false);
	found = str.substr(7, 1).find_first_not_of("-");
	if (found != std::string::npos)
		return (false);
	found = str.substr(8, 2).find_first_not_of(nb);
	if (found != std::string::npos)
		return (false);
	found = str.substr(10, 1).find_first_not_of(" ");
	if (found != std::string::npos)
		return (false);
	found = str.substr(11, 1).find_first_not_of("|");
	if (found != std::string::npos)
		return (false);
	found = str.substr(12, 1).find_first_not_of(" ");
	if (found != std::string::npos)
		return (false);

	return (true);
}

bool	date(const std::string str)
{
	int	y = atoi(str.substr(0,4).c_str());
	int	m = atoi(str.substr(5, 2).c_str());
	int	d = atoi(str.substr(8, 2).c_str());

	if (y < 1900 || y >= 3000 || m > 12 || m == 0 || d > 31 || d == 0)
		return (false);
	else if ((m % 2 != 1 && m < 7 && d > 30) || (m % 2 == 1 && m > 8 && d > 30))
		return (false);
	else if (m == 2 && y % 4 == 0 && d > 29)
		return (false);
	else if (m == 2 && d > 28 && y % 4 > 0)
		return (false);
	return (true);
}

bool	value(const std::string str)
{
	size_t	i = 13;
	size_t	dot = 0;

	if (str[i] == '-')
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	while (str[i])
	{
		if (!isdigit(str[i]) && str[i] != '.')
		{
			std::cout << "Error: bad input => " << str << std::endl;
			return (false);
		}
		if (str[i] == '.')
			dot++;
		if (atoi(str.substr(13, 4).c_str()) == 1000 && dot > 0 && str[i] != '0' && str[i] != '.')
		{
			std::cout << "Error: too large a number." << std::endl;
			return (false);
		}
		i++;
	}
	if (i - 13 > 4 && dot == 0)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	else if (atof(str.substr(13, i - 13).c_str()) > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	else if (dot > 1)
	{
		std::cout << "Error: bad input => " << str << std::endl;
		return (false);
	}
	return (true);
}

void	exec(const std::string &av)
{
	std::string							line;
	std::ifstream						myfile(av.c_str());
	std::ifstream						mydata("data.csv");
	std::map<unsigned int, std::string>	input, data;

	for (unsigned int it = 0; getline(myfile, line); it++)
		input.insert(std::make_pair(it, line));
	for (unsigned int data_it = 0; getline(mydata, line); data_it++)
		data.insert(std::make_pair(data_it, line));
	std::map<unsigned int, std::string>::iterator	it = input.begin();
	std::map<unsigned int, std::string>::iterator	data_it = data.begin();
	data_it++;
	while (it->second.length() == 0 && it != input.end())
		it++;
	if (it->second == "date | value")
		it++;
	while (it != input.end())
	{
		if (it->second == "\0")
			;
		else if ((it->second.length() < 14 || !format(it->second)))
			std::cout << "Error: bad input => " << it->second << std::endl;
		else if	(!value(it->second))
			;
		else if (!date(it->second))
			std::cout << "Error: bad input => " << it->second << std::endl;	
		else
		{
			while (strncmp(it->second.c_str(), data_it->second.c_str(), 10) > 0)
			{
				data_it++;
				if (data_it == data.end())
					break ;
			}
			if (data_it->second == "\0")
				data_it--;
			else if (strncmp(it->second.c_str(), data_it->second.c_str(), 10) != 0 && data_it->first != 1)
				data_it--;
			std::cout << it->second.substr(0, 11).c_str() << "=> " << strtod(it->second.substr(13, (it->second.length() - 12)).c_str(), NULL) * strtod(data_it->second.substr(11, (data_it->second.length() - 10)).c_str(), NULL) << std::endl;
		}
		if (data_it->second == "\0")
			data_it--;
		data_it = data.begin();
		data_it++;
		it++;
	}
	myfile.close();
	mydata.close();
}
