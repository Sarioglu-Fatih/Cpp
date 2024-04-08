/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:43:50 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/22 15:54:08 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ND", 100, 50, 20)
{
	std::cout << "Inherit default constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Inherit desctructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	this->name = scav.name;
	this->hitPoints = scav.hitPoints;
	this->attackDamage = scav.attackDamage;
	std::cout << "Inherit copy constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str, 100, 50, 20)
{
	std::cout << "Inherit constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name, int hit, int energy, int attack)
{
	this->name = name;
	this->hitPoints = hit;
	this->energyPoints = energy;
	this->attackDamage = attack;
	std::cout << "Inherit constructor called." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scav)
{
	this->name = scav.name;
	this->hitPoints = scav.hitPoints;
	this->energyPoints = scav.energyPoints;
	this->attackDamage = scav.attackDamage;
	std::cout << "Inherit copy assignement operator called." << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0)
		std::cout << this->name << " is dead." << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << this->name << " can't attack, he has no more energy." << std::endl;
	else if (this->name == target)
		std::cout << this->name << " attack himself." << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " point(s) of damage !" << std::endl;
	if (this->energyPoints > 0)
		this->energyPoints--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->name << " is now in Gate keeper mod." << std::endl;
}