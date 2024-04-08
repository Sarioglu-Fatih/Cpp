/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:28:07 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/22 14:55:26 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	*Timmy = new ScavTrap("Rendy");
	ScavTrap	Bobby("Bobby");
	FragTrap	Teddy("Teddy");
	ClapTrap	Jimmy("Jimmy");

	std::cout << std::endl;
	Timmy->attack("Bobby");
	Bobby.takeDamage(20);
	Bobby.beRepaired(20);
	
	std::cout << std::endl;
	Teddy.attack("Jimmy");
	Jimmy.takeDamage(30);
	Teddy.attack("Jimmy");
	Jimmy.takeDamage(6);

	std::cout << std::endl;
	Bobby.guardGate();
	Teddy.highFivesGuys();

	std::cout << std::endl;
	delete(Timmy);

	return (0);
}