/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:33:29 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/21 13:23:18 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	A("Bobby", 233);
		Bureaucrat	B;

		B = A;
		std::cout << B.getName() << "\t" << B.getGrade() << std::endl;

	} 
	catch (const std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}

	try
	{
		Bureaucrat	A("Bobby", 1);
		Bureaucrat	B;

		B = A;
		std::cout << B << std::endl;
		B.decrement();
		std::cout << B << std::endl;
		B.increment();
		B.increment();
	}
	catch (const std::exception& error) {
		std::cerr << error.what() << '\n';
	}

	try
	{
		Bureaucrat	A("Bobby", 0);
		Bureaucrat	B;

		B = A;
		std::cout << B.getName() << "\t" << std::endl;

	}
	catch (const std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}
	return (0);
}