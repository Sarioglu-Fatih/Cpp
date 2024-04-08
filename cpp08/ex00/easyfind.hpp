/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:47:42 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/28 17:35:15 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

class	ElementNotFoundException : public std::exception
{
	public :
		virtual const char	*what() const throw()
		{
			return ("Element not found");
		}
};

template	<typename T>
void	easyfind(T &container, const int i)
{
	if (std::find(container.begin(), container.end(), i) != container.end())
		std::cout << "Element found" << std::endl;
	else
		throw ElementNotFoundException();
}

#endif