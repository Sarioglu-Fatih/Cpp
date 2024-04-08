/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:19:03 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/30 22:07:57 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	public :
		AMateria();
		virtual ~AMateria();
		AMateria(std::string str);
		AMateria(const AMateria &cpy);

		AMateria	&operator=(const AMateria &cpy);
		std::string	const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target) = 0;

	protected :
		std::string	type;
};

#endif