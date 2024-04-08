/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:28:10 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/22 14:52:55 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public :
		ClapTrap();
		virtual ~ClapTrap();
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap &c);
		ClapTrap(std::string str, int hit, int energy, int attack);

		ClapTrap &operator=(const ClapTrap &c);

		void			takeDamage	(unsigned int amount);
		void			beRepaired	(unsigned int amount);
		void			attack		(const std::string &target);

	protected :
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};

#endif