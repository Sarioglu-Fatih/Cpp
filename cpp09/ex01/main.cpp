/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:24:41 by fsariogl          #+#    #+#             */
/*   Updated: 2023/09/04 16:38:30 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	err(void)
{
	std::cerr << "Error" << std::endl;
	return (-1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (err());
	if (!parsing(av[1]))
		return (err());
	if (!exec(av[1]))
		return (err());
	return (0);
}