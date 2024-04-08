/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:16:21 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/27 16:49:14 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	public :
		Dog();
		~Dog();
		Dog(const Dog &cpy);

		Dog			&operator=(const Dog &cpy);
		void		makeSound() const;
		void		setIdea(std::string idea, int n);
		std::string	getIdea(int n);

	private :
		Brain		*bigBrain;
};

#endif