/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:25:36 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/30 20:02:10 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(const Ice &cpy)
{
	this->type = cpy.type;
}

Ice	&Ice::operator=(const Ice &cpy)
{
	this->type = cpy.type;
	return (*this);
}

AMateria	*Ice::clone() const
{
	AMateria *A = new Ice;
	return (A);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}