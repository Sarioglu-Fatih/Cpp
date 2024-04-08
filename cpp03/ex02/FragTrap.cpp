/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:58:14 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/20 19:29:55 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("ND", 100, 100, 30)
{
	std::cout << "Inherit FragTrap default constructeur called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Inherit FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
	this->name = cpy.name;
	this->hitPoints = cpy.hitPoints;
	this->energyPoints = cpy.energyPoints;
	this->attackDamage = cpy.attackDamage;
	std::cout << "Inherite FragTrap copy constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "Inherit FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name, int hit, int energy, int attack)
{
	this->name = name;
	this->hitPoints = hit;
	this->energyPoints = energy;
	this->attackDamage = attack;
	std::cout << "Inherit FragTrap constructor called." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &cpy)
{
	this->name = cpy.name;
	this->hitPoints = cpy.hitPoints;
	this->energyPoints = cpy.energyPoints;
	this->attackDamage = cpy.attackDamage;
	std::cout << "Inherit FragTrap copy assignement operator called." << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Please give me high five, please, friends, guys.. someone..." << std::endl;
}