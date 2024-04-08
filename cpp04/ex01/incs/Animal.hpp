/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:16:19 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/24 18:49:23 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal &cpy);

		Animal			&operator=(const Animal &cpy);
		virtual void	makeSound() const;
		std::string		getType() const;

	protected :
		std::string	type;
};

#endif