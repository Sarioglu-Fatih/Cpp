/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:33:29 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/22 17:48:47 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Form		A;
		Form		B("28A", false, 33, 1);
		Bureaucrat	Charlie("Charlie", 33);

		A = B;

		std::cout << A << "\t" << Charlie << std::endl;
		Charlie.signForm(A);
		A.beSigned(Charlie);
		std::cout << A << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	Bobby("Bobby", 44);
		Form		F("28A", false, 22, 22);

		std::cout << F << std::endl;
		Bobby.signForm(F);
		F.beSigned(Bobby);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}