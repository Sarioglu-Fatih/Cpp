/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:15:37 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/26 18:04:55 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	this->type = cpy.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &cpy)
{
	this->type = cpy.type;
	std::cout << "Animal overloaded assignement operator called" << std::endl;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal cannot make a sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}