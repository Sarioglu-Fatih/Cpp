/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:11:02 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/01 16:17:21 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->inv[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->inv[i] != 0)
			delete this->inv[i];
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	for (int i = 0; i < 4; i++)
	{
		if (cpy.inv[i] != 0)
			this->inv[i] = cpy.inv[i]->clone();
		else
			this->inv[i] = 0;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &cpy)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i] != 0)
			delete this->inv[i];
		if (cpy.inv[i] != 0)
			this->inv[i] = cpy.inv[i]->clone();
		else
			this->inv[i] = 0;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *cpy)
{
	int	i = 0;

	while (i < 4 && inv[i] != 0)
		i++;
	if (i < 4)
	{
		this->inv[i] = cpy;
		std::cout << "Materia " << cpy->getType() << " learned" << std::endl;
	}
	else
	{
		std::cout << "Can't learn more than 4 Materia" << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;

	while (inv[i] && inv[i]->getType() != type && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Materia " << type << " does not exist" << std::endl;
		return (0);
	}
	else
	{
		std::cout << "Materia " << type << " is created" << std::endl;
		return (this->inv[i]->clone());
	}
}