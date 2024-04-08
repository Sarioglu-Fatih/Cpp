/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:28:07 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/22 16:10:07 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	*Bobby = new ScavTrap("Rendy");
	ScavTrap	Timmy("Timmy", 10, 1, 8);
	ClapTrap	Jimmy("Jimmy", 10, 3, 8);
	ScavTrap	Johnny("Johnny", 10, 1, 8);
	ScavTrap	Emmy("Emmy");

	std::cout << std::endl;
	Bobby->attack("Timmy");
	Timmy.takeDamage(20);

	std::cout << std::endl;
	Jimmy.attack("Johnny");
	Johnny.takeDamage(8);
	Johnny.beRepaired(8);
	Jimmy.attack("Johnny");
	Johnny.takeDamage(8);
	Johnny.beRepaired(8);
	Jimmy.attack("Johnny");
	Johnny.takeDamage(8);
	Johnny.beRepaired(8);

	std::cout << std::endl;
	Emmy.guardGate();

	std::cout << std::endl;
	delete Bobby;
	return (0);
}