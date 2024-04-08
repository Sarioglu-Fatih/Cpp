/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:40:09 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/26 18:08:10 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Wrong cat";
	std::cout << "WrongCat default constructor created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	this->type = cpy.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &cpy)
{
	this->type = cpy.type;
	std::cout << "WrongCat overloaded assignement operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound()
{
	std::cout << "Wrong miaouuuu" << std::endl;
}