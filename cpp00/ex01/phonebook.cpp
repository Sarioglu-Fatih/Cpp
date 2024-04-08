/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:17:05 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/03 15:59:21 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{}

Contact::~Contact(){}

Phonebook::Phonebook(){}

Phonebook::~Phonebook(){}

void	Contact::put_cname(std::string str, char c)
{
	switch(c)
	{
		case 'f':
			firstname = str;
		case 'l':
			lastname = str;
		case 'n':
			nickname = str;
		case 'p':
			phonenumber = str;
		case 'd':
			darkestsecret = str;
	}
}

void	Contact::thisname()
{
	if (firstname[0])
	{
		std::cout << std::setw(10) << index << "|";
		if (firstname.length() > 10)
			std::cout << std::setw(9) << firstname.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << firstname.substr(0, 10) << "|";
		if (lastname.length() > 10)
			std::cout << std::setw(9) << lastname.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << lastname.substr(0, 10) << "|";
		if (nickname.length() > 10)
			std::cout << std::setw(9) << nickname.substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::setw(10) << nickname.substr(0, 10) << "|" << std::endl;
	}
}

void	Contact::put_index(int i)
{
	index = i;
}

void	Phonebook::addcontact()
{
	std::string	arg;

	person[nb_contact].put_index(nb_contact);
	std::cout << "\nFirst name: " << std::flush;
	while (std::getline(std::cin, arg))
		if (arg.size() > 0)
			break ;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	person[nb_contact].put_cname(arg, 'f');
	std::cout << "Last name: " << std::flush;
	while (getline(std::cin, arg))
		if (arg.size() > 0)
			break ;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	person[nb_contact].put_cname(arg, 'l');
	std::cout << "Nickname: " << std::flush;
	while (getline(std::cin, arg))
		if (arg.size() > 0)
			break ;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	person[nb_contact].put_cname(arg, 'n');
	std::cout << "Phone number: " << std::flush;
	while (getline(std::cin, arg))
		if (arg.size() > 0)
			break ;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	person[nb_contact].put_cname(arg, 'p');
	std::cout << "Darkest secret: " << std::flush;
	while (getline(std::cin, arg))
		if (arg.size() > 0)
			break ;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	person[nb_contact].put_cname(arg, 'd');
	std::cout << "Contact added\n" << std::endl;
	nb_contact += 1;
	if (nb_contact > 7)
		nb_contact = 0;
	nb_total_contact++;
}

void	Contact::putthename()
{
	std::cout << "\n" << "First name: " << firstname << "\n" << "Last name: " << lastname << "\n" << "Nickname: "
	<< nickname << "\n"<< "Phone number: "<< phonenumber << "\n" << "Darkest secret: " << darkestsecret << "\n" << std::endl;
}

void	Phonebook::searchcontact()
{
	int	i = 0;
	std::string arg;

	if (nb_total_contact > 0)
	{
		std::cout << std::endl << std::setw(10) << "INDEX  " << "|"  << std::setw(10) << "FIRSTNAME"
		<< "|" << std::setw(10) << "LASTNAME " << "|"  << std::setw(10) << "NICKNAME " << "|" << std::endl;
		while (i < 8)
		{
			person[i].thisname();
			i++;
		}
		std::cout << std::endl;
		while (1)
		{
			std::cout << "Choose a contact with the index: " << std::flush;
			std::getline(std::cin, arg);
			if (std::cin.eof())
				exit(EXIT_FAILURE);
			if (arg[0] >= '0' && arg[0] <= '7' && !arg[1])
			{
				if (stoi(arg) < nb_total_contact)
				{
					person[stoi(arg)].putthename();
					break ;
				}
			}
		}
	}
	
}

void	Phonebook::init_nb_contact()
{
	nb_total_contact = 0;
}

int	main()
{
	Phonebook pb;
	std::string arg;

	pb.init_nb_contact();
	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT: " << std::flush;
		std::getline(std::cin, arg);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		if (arg.compare("ADD") == 0)
			pb.addcontact();
		else if (arg.compare("SEARCH") == 0)
			pb.searchcontact();
		else if (arg.compare("EXIT") == 0)
			break ;
	}
	std::cout << "See you soon" << std::endl;
	return (0);
}