/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:15:40 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/27 16:49:39 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	bigBrain = new Brain;
	std::cout << "Dog default constructeur called" << std::endl;
}

Dog::~Dog()
{
	delete bigBrain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	this->type = cpy.type;
	this->bigBrain = new Brain;
	for (int i = 0; i < 100; i++)
		this->bigBrain->setIdea(cpy.bigBrain->getIdea(i), i);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &cpy)
{
	this->type = cpy.type;
	for (int i = 0; i < 100; i++)
		this->bigBrain->setIdea(cpy.bigBrain->getIdea(i), i);
	std::cout << "Dog overloaded assignement operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouaff Wouaff" << std::endl;
}

void	Dog::setIdea(std::string idea, int n)
{
	bigBrain->setIdea(idea, n);
}

std::string	Dog::getIdea(int n)
{
	return (bigBrain->getIdea(n));
}