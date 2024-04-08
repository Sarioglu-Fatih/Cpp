/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:58:15 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/21 17:55:29 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public :
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &cpy);
		FragTrap(std::string name);
		FragTrap(std::string name, int hit, int energy, int attack);

		FragTrap	&operator=(const FragTrap &cpy);
		void		highFivesGuys(void);
};

#endif