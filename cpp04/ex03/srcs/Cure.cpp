/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:25:38 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/30 20:02:03 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const Cure &cpy)
{
	this->type = cpy.type;
}

Cure	&Cure::operator=(const Cure &cpy)
{
	this->type = cpy.type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	AMateria	*A = new Cure();
	return (A);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}