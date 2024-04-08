/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:50:00 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/29 16:56:42 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(const Span &cpy)
{
	this->size = cpy.size;
	this->container = cpy.container;
}

Span::Span(unsigned int nb)
{
	this->size = 0;
	container.reserve(nb);
}

Span	&Span::operator=(const Span &cpy)
{
	this->size = cpy.size;
	this->container = cpy.container;
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (this->size < this->container.capacity())
	{
		size++;
		this->container.push_back(nb);
	}
	else
		throw CapacityExceedException();
}

void	Span::addXNumbers(const unsigned int nb)
{
	unsigned int	r;

	std::srand(static_cast<unsigned int>(std::time(NULL)));
	for (unsigned int it = 0; it < nb; it++)
	{
		r = rand();
		this->addNumber(r);
	}
}

unsigned int	Span::longestSpan(void)
{
	if (this->size <= 1)
		throw NotEnoughNumException();
	else
	{
		std::sort(this->container.begin(), this->container.end());
		return (container.back() - container.front());
	}
}

unsigned int	Span::shortestSpan(void)
{
	int	diff = INT_MAX;

	if (this->size <= 1)
		throw NotEnoughNumException();
	std::sort(this->container.begin(), this->container.end());
	for (unsigned int i = this->container.size() - 1; i > 0; i--)
	{
		if (this->container[i] - this->container[i - 1] < diff)
			diff = this->container[i] - this->container[i - 1];
	}
	return (diff);
}