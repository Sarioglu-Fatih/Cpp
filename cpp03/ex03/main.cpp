/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:28:07 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/23 15:47:16 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Jimmy("Jimmy");
	DiamondTrap	Timmy("Timmy");

	std::cout << std::endl;
	Jimmy.attack("Timmy");
	Timmy.takeDamage(30);

	std::cout << std::endl;
	Jimmy = Timmy;
	Jimmy.whoAmI();

	std::cout << std::endl;
	return (0);
}