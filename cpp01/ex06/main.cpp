/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:02:03 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/10 20:01:36 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string arg(av[1]);
		if ((arg.compare("DEBUG") == 0 || arg.compare("INFO") == 0
				|| arg.compare("WARNING") == 0 || arg.compare("ERROR") == 0))
		{
			Harl	a;

			a.complain(av[1]);
			return (0);
		}
	}
	std::cout << "Please put DEBUG INFO WARNING or ERROR only\n" << std::endl;
	return (-1);
}