/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:19:01 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/30 14:10:51 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"

AMateria::AMateria()
{
	this->type = "ND";
}

AMateria::~AMateria()
{

}

AMateria::AMateria(std::string str)
{
	this->type = str;
}

AMateria::AMateria(const AMateria &cpy)
{
	this->type = cpy.type;
}

AMateria	&AMateria::operator=(const AMateria &cpy)
{
	this->type = cpy.type;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->type);
}