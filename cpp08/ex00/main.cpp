/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:45:46 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/28 17:35:06 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	try
	{
		std::vector<int>	v;

		v.push_back(1);
		v.push_back(3);
		v.push_back(5);
		easyfind(v, 3);
		easyfind(v, 2);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "\n" << std::endl;
	}


	try
	{
		std::list<int>	l;

		l.push_back(1);
		l.push_back(3);
		l.push_back(5);
		easyfind(l, 5);
		easyfind(l, 6);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "\n" << std::endl;
	}

	
	try
	{
		std::deque<int>	d;

		d.push_back(1);
		d.push_back(3);
		d.push_back(5);
		easyfind(d, 0);
		easyfind(d, 1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}