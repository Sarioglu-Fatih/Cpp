/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:38:39 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/23 15:46:29 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name", 100, 50, 30)
{
	this->name = "ND";
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy)
{
	this->name = cpy.name;
	this->hitPoints = cpy.hitPoints;
	this->attackDamage = cpy.attackDamage;
	this->energyPoints = cpy.energyPoints;
	std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30)
{
	this->name = name;
	std::cout << "DiamondTrap constructor called." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &cpy)
{
	ClapTrap::operator=(cpy);
	name = cpy.name;
	std::cout << "DiamondTrap overloaded operator called." << this->name << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (this->hitPoints <= 0)
		std::cout << "I'm dead men." << std::endl;
	std::cout << "My name is " << this->name << ", " << ClapTrap::name << "." << std::endl;
}