/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:05:38 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/26 18:04:56 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Brain.hpp"

Brain::Brain()
{
	this->ideas[0] = "I don't want to burn the world";
	this->ideas[1] = "I want to sleep";
	this->ideas[2] = "I'm hungry";
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &cpy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	std::cout << "Brain overloaded assignement operator called" << std::endl;
	return (*this);
}

std::string	Brain::getIdea(int n)
{
	return (this->ideas[n]);
}

void	Brain::setIdea(std::string idea, int n)
{
	this->ideas[n] = idea;
}