/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:38:07 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/03 19:08:54 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "z";
}

Zombie::Zombie(std::string n)
{
	name = n;
}

Zombie::~Zombie()
{

}

void	Zombie::announce(void)
{
	std::cout << "My name is " << name << std::endl;
}