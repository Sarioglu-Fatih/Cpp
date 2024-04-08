/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:28:07 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/19 16:35:45 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Bobby("Bobby", 10, 3, 8);
	ClapTrap	Timmy("Timmy", 10, 1, 8);
	ClapTrap	Charlie("Charlie", 10, 2, 8);
	ClapTrap	Danie;
	ClapTrap	Emmy("Emmy");

	std::cout << std::endl;
	Bobby.attack("Timmy");
	Timmy.takeDamage(8);
	Timmy.beRepaired(8);
	std::cout << std::endl;

	Bobby.attack("Timmy");
	Timmy.takeDamage(8);
	Timmy.beRepaired(8);
	std::cout << std::endl;

	Bobby.attack("Timmy");
	Timmy.takeDamage(8);
	Timmy.beRepaired(8);
	std::cout << std::endl;

	Bobby.attack("Timmy");
	Timmy.takeDamage(8);
	std::cout << std::endl;

	Charlie.attack("Bobby");
	Bobby.takeDamage(8);
	Bobby.beRepaired(8);
	std::cout << std::endl;

	Danie = Charlie;
	Danie.attack("Bobby");
	Bobby.takeDamage(8);
	std::cout << std::endl;

	Emmy.attack("Danie");
	Danie.takeDamage(0);
	std::cout << std::endl;

	return (0);
}