/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:29:21 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/11 12:00:00 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (NULL == weap)
		std::cout << name << " can't attack without weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weap->getType() << std::endl;

}

HumanB::HumanB(std::string n)
{
	name = n;
	weap = NULL;
}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &w)
{
	weap = &w;
}