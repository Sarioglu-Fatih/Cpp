/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:19:08 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/27 16:19:43 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &cpy) {*this = cpy;}

Intern	&Intern::operator=(const Intern &cpy)
{
	if (this == &cpy)
		return (*this);
	return (*this);
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	int			i = 0;
	Form		*tmp;
	std::string	comp[3] = {"robotomy request", "shrubbery request", "presidential pardon request"};

	while (comp[i] != form && i < 3)
		i++;
	switch (i)
	{
		case 0:
			tmp = new RobotomyRequestForm(target);
			std::cout << "Intern creates robotomy request form" << std::endl;
			break ;

		case 1:
			tmp = new ShrubberyCreationForm(target);
			std::cout << "Intern creates shrubbery creation form" << std::endl;
			break ;

		case 2:
			tmp = new PresidentialPardonForm(target);
			std::cout << "Intern creates presidential pardon form" << std::endl;
			break ;

		default :
			throw Intern::RequestNull();
	}
	return (tmp);
}