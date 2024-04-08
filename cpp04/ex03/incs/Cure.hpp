/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:25:37 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/30 20:02:24 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

class	Cure : public AMateria
{
	public :
		Cure();
		~Cure();
		Cure(const Cure &cpy);

		Cure		&operator=(const Cure &cpy);
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif