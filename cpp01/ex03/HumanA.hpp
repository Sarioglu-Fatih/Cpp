/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:27:56 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/11 11:58:14 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "HumanB.hpp"

class	HumanA
{
	public:
		HumanA(std::string n, Weapon &w);
		~HumanA();
		void	attack();
	
	private:
		Weapon &weap;
		std::string name;
};
