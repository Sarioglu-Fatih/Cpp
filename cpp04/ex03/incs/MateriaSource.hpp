/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:11:03 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/01 16:11:41 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &cpy);

		MateriaSource	&operator=(const MateriaSource &cpy);
		void			learnMateria(AMateria *cpy);
		AMateria		*createMateria(std::string const & type);

	private :
		AMateria	*inv[4];
};

#endif