/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:47:22 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/03 14:23:50 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public:
		Zombie();
		Zombie(std::string n);
		~Zombie();
		void	announce(void);

	private:
		std::string	name;
	
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif