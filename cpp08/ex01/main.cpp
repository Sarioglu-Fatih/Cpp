/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:49:58 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/29 17:03:51 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << "\n" << std::endl;



	try
	{
		Span	A(3);

		A.addNumber(15);
		A.addNumber(8);
		A.addNumber(5);
		std::cout << A.shortestSpan() << std::endl;
		std::cout << A.longestSpan() << "\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}



	try
	{
		Span	A(1);

		A.addNumber(15);
		A.addNumber(8);
		A.addNumber(5);
		std::cout << A.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "\n" << std::endl;
	}



	try
	{
		Span	A(1);

		A.addNumber(15);
		std::cout << A.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "\n" << std::endl;
	}



	try
	{
		unsigned int	nb = 100;
		Span			A(nb);

		A.addXNumbers(nb);

		std::cout << "Shortest = " << A.shortestSpan() << std::endl;
		std::cout << "Longest = " << A.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}



























// int	main(void)
// {
// 	std::ifstream	urandom("/dev/urandom", std::ios::in);
// 	if (!urandom)
// 	{
// 		std::cerr << "ERROR: cannot open urandom" << std::endl;
// 	}

// 	unsigned char	v;
// 	int				size = 0;
// 	size_t			total = 0;
// 	int				flag = 0;
	
// 	urandom.read(reinterpret_cast<char*>(&v), sizeof(v));
// 	flag = (int)v;

// 	if (flag == 0)
// 		flag = 1;
// 	for (int i = 0; i < flag * 2; i++)
// 	{
// 		urandom.read(reinterpret_cast<char*>(&v), sizeof(v));
// 		size = (int)v;
// 		total = total + size;
// 	}
// 	urandom.close();

	
// 	std::cout << "str = " << total << std::endl;
// }