/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:25:37 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/30 20:02:22 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

class	Ice : public AMateria
{
	public :
		Ice();
		~Ice();
		Ice(const Ice &cpy);

		Ice			&operator=(const Ice &cpy);
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif