/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:45:44 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/30 23:14:08 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define UNEQUIP_SIZE 1000

class	Character : public ICharacter
{
	public :
		Character();
		~Character();
		Character(std::string str);
		Character(const Character &cpy);

		Character			&operator=(const Character &cpy);
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

	private :
		std::string			name;
		AMateria			*inv[4];
		AMateria			*uneq[UNEQUIP_SIZE];
};

#endif