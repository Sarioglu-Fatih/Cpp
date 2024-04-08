/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:06:02 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/24 20:45:35 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	public :
		Brain();
		~Brain();
		Brain(const Brain &cpy);

		Brain		&operator=(const Brain &cpy);
		std::string	getIdea(int n);
		void		setIdea(std::string idea,  int n);

	private :
		std::string	ideas[100];
};

#endif