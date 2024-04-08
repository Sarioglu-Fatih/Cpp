/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:33:29 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/26 18:39:16 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat				Tommy("Tommy", 1);
		Bureaucrat				Fredy("Fredy", 145);
		ShrubberyCreationForm	Garden("Garden");
		RobotomyRequestForm		Jonny("Jonny");
		PresidentialPardonForm	Billy("Billy");

		std::cout << "\n" << Fredy << std::endl;
		Fredy = Tommy;
		std::cout << Fredy << std::endl;
		std::cout << Garden << std::endl;
		std::cout << Jonny << std::endl;
		std::cout << Billy << "\n" << std::endl;

		Garden.beSigned(Fredy);
		Garden.execute(Fredy);
		Jonny.beSigned(Fredy);
		Jonny.execute(Fredy);
		Billy.beSigned(Tommy);
		Billy.execute(Tommy);

	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat				Tommy("Tommy", 29);
		Bureaucrat				Fredy("Fredy", 145);
		ShrubberyCreationForm	Garden("Garden");
		RobotomyRequestForm		Jonny("Jonny");
		PresidentialPardonForm	Billy("Billy");

		Fredy = Tommy;

		Garden.beSigned(Fredy);
		Fredy.executeForm(Garden);
		Jonny.beSigned(Fredy);
		Jonny.execute(Fredy);
		Billy.beSigned(Fredy);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	Form		*form = new ShrubberyCreationForm("Garden");
	Bureaucrat	Bobby("Bobby", 46);
	RobotomyRequestForm	Fredy("Fredy");
	try
	{
		Bobby.increment();
		Fredy.beSigned(Bobby);
		Bobby.signForm(Fredy);
		Bobby.executeForm(Fredy);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete form;


	return (0);
}