/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:50:01 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/29 17:04:48 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <ctime>

class	Span
{
	public :
		~Span();
		Span(const Span &cpy);
		Span(unsigned int nb);

		Span	&operator=(const Span &cpy);
		void	addNumber(int nb);
		void	addXNumbers(const unsigned int nb);
		unsigned int	longestSpan(void);
		unsigned int	shortestSpan(void);


	private:
		Span();
		unsigned int		size;
		std::vector<int>	container;


	class	CapacityExceedException : public std::exception
	{
		public :
			const char	*what() const throw()
			{
				return ("Error: Maximum capacity exceed");
			}
	};

	class	NotEnoughNumException : public std::exception
	{
		public :
			const char	*what() const throw()
			{
				return ("Error: Not enough numbers in Span");
			}
	};

	class	UrandomIsNotException : public std::exception
	{
		public :
			const char	*what() const throw()
			{
				return ("Error: Cannot creat random number");
			}
	};
};

#endif