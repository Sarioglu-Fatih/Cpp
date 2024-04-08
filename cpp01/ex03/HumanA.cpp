/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:27:32 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/11 11:59:22 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}

HumanA::HumanA(std::string n, Weapon &w) : weap(w), name(n) {}

HumanA::~HumanA() {}
