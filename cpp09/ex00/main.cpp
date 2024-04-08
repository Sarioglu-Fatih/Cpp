/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:49:00 by fsariogl          #+#    #+#             */
/*   Updated: 2023/09/01 00:22:19 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << (ac < 2 ? "Error: could not open file." : "Error: one argument expected.") << std::endl;
		return (-1);
	}
	
	if (!parsing(av[1]))
		return (-1);
	exec(av[1]);

	
	return (0);
}