/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:33:29 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/27 18:17:52 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Intern		intern;
	Bureaucrat	Jonny("Jonny", 1);
	Form		*form;

	std::cout << std::endl;
	
	form = NULL;
	try
	{
		form = intern.makeForm("robotomy request", "Billy form");
		form->beSigned(Jonny);
		Jonny.signForm(*form);
		Jonny.executeForm(*form);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (form)
		delete form;
	
	std::cout << std::endl;

	form = NULL;
	try
	{
		form = intern.makeForm("request", "Garden");
		form->beSigned(Jonny);
		Jonny.signForm(*form);
		Jonny.executeForm(*form);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (form)
		delete form;

	std::cout << std::endl;

	Bureaucrat	Danny("Danny", 148);

	form = NULL;
	try
	{
		form = intern.makeForm("presidential pardon request", "Charly");
		form->beSigned(Danny);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (form)
		delete form;

	std::cout << std::endl;
	return (0);
}