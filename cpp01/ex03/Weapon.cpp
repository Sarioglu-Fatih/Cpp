/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:26:51 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/11 13:47:57 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
	type = t;
}

Weapon::~Weapon() {}

void	Weapon::setType(std::string t)
{
	type = t;
}

std::string const	&Weapon::getType()
{
	return (type);
}
