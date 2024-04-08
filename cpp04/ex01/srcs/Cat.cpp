/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:15:38 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/27 18:24:15 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

Cat::Cat()
{
	this->bigBrain = new Brain;
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete bigBrain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	this->bigBrain = new Brain;
	for (int i = 0; i < 100; i++)
		this->bigBrain->setIdea(cpy.bigBrain->getIdea(i), i);
	this->type = cpy.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cpy)
{
	this->type = cpy.type;
	for (int i = 0; i < 100; i++)
		this->bigBrain->setIdea(cpy.bigBrain->getIdea(i), i);
	std::cout << "Cat overloaded assignement operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuuuuuuuu" << std::endl;
}

std::string	Cat::getIdea(int n)
{
	return (bigBrain->getIdea(n));
}

void	Cat::setIdea(std::string idea, int n)
{
	bigBrain->setIdea(idea, n);
}