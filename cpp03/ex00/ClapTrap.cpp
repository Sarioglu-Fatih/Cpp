/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:28:09 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/19 16:37:07 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "ND";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage = c.attackDamage;
	std::cout << "Copy constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string str, int hit, int energy, int attack)
{
	this->name = str;
	this->hitPoints = hit;
	this->energyPoints = energy;
	this->attackDamage = attack;
	std::cout << "Constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string str)
{
	this->name = str;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Constructor called." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &c)
{
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage = c.attackDamage;
	std::cout << "Copy assignement operator called." << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0)
		std::cout << this->name << " is dead." << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << this->name << " can't attack, he has no more energy." << std::endl;
	else if (this->name == target)
		std::cout << this->name << " attack himself." << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " point(s) of damage !" << std::endl;
	if (this->energyPoints > 0)
		this->energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
		std::cout << this->name << " is already dead." << std::endl;
	else
	{
		this->hitPoints -= amount;
		if (this->hitPoints <= 0)
			std::cout << this->name << " taked " << amount << " point(s) damage, he's dead." << std::endl;
		else
			std::cout << this->name << " taked " << amount << " point(s) damage, " << this->hitPoints << " hit point(s) left." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
		std::cout << this->name << " can't repair, he's dead." << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << this->name << " can't repair, he has no more energy." << std::endl;
	else
	{
		std::cout << this->name << " has recovered " << amount << " hit point(s), " << (this->hitPoints + amount) << " hit point(s) left." << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}