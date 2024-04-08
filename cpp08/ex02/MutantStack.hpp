/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:15:44 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/30 16:33:11 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public :
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack<T> &cpy) {this->c = cpy.c;}
		MutantStack<T>	&operator=(const MutantStack<T> &cpy)
		{
			this->c = cpy.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator	end()
		{
			return (this->c.end());
		}
		
};

#endif