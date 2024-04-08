/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:15:40 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/26 18:12:08 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructeur called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	this->type = cpy.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &cpy)
{
	this->type = cpy.type;
	std::cout << "Dog overloaded assignement operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouaff Wouaff" << std::endl;
}