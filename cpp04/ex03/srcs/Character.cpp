/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:45:43 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/30 23:25:50 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Character.hpp"

Character::Character()
{
	this->name = "ND";
	for (int i = 0; i < 4; i++)
		this->inv[i] = 0;
	for (int i = 0; i < UNEQUIP_SIZE; i++)
		this->uneq[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inv[i] != 0)
			delete inv[i];
	}
	for (int i = 0; i < UNEQUIP_SIZE; i++)
	{
		if (uneq[i] != 0)
			delete uneq[i];
	}
}

Character::Character(const Character &cpy)
{
	this->name = cpy.name;
	for (int i = 0; i < 4; i++)
		inv[i] = 0;
	for (int i = 0; i < UNEQUIP_SIZE; i++)
		uneq[i] = 0;
}

Character	&Character::operator=(const Character &cpy)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i] != 0)
			delete inv[i];
		if (cpy.inv[i] != 0)
			this->inv[i] = cpy.inv[i]->clone();
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->name);
}

Character::Character(std::string str)
{
	this->name = str;
	for (int i = 0; i < 4; i++)
		this->inv[i] = 0;
	for (int i = 0; i < UNEQUIP_SIZE; i++)
		this->uneq[i] = 0;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (inv[i] == 0)
		{
			inv[i] = m;
			break;
		}
}

void	Character::unequip(int idx)
{
	static int unequip_idx = 0;

	if (idx >= 0 && idx <= 3)
	{
		if (this->inv[idx] != 0)
		{
			this->uneq[unequip_idx] = this->inv[idx];
			this->inv[idx] = 0;
			unequip_idx++;
		}
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (inv[idx])
		this->inv[idx]->use(target);
}