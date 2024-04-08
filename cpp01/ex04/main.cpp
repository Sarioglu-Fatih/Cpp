/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:53:27 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/11 12:32:50 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	parsing(int ac, char **av)
{
	if (ac < 4 || ac > 4)
	{
		std::cerr << "Please put 3 arguments only: Filename, String1 and String2." << std::endl;
		return (-1);
	}
	std::ifstream	ifs(av[1]);
	if (ifs == 0)
	{
		std::cerr << "Please put valide Filename." << std::endl;
		return (-1);
	}
	else
		ifs.close();
	std::string	fileName = av[2];
	if (fileName.length() <= 0)
	{
		std::cerr << "Please put at least one charactere in String1" << std::endl;
		return (-1);
	}
	return (0);
}

int	exec(char **av)
{
	std::ifstream	ifs(av[1]);
	std::string		temp = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		fileName = temp + ".replace";
	std::ofstream	ofs;
	std::string		text = "asd";
	std::size_t		found;
	static int		nl = 0;

	ofs.open(fileName.c_str());
	while (!ifs.eof())
	{
		if (nl > 0)
			ofs << std::endl;
		nl++;
		std::getline(ifs, text);
		found = text.find(s1);
		while (found != std::string::npos)
		{
			ofs << text.substr(0, found) << s2 << std::flush;
			text = text.substr(found + s1.length());
			found = text.find(s1);
		}
		if (found == std::string::npos)
			ofs << text << std::flush;
		else
			ofs << std::flush;
	}
	ifs.close();
	ofs.close();
	return (0);
}

int	main(int ac, char **av)
{
	if (parsing(ac, av) < 0)
		return (-1);
	if (exec(av) < 0)
		return (-1);
	return (0);
}