/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:20:10 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/17 14:08:10 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(), y()
{
	return ;
}

Point::Point(float const x, float const y) : x(x), y(y)
{
	return ;
}

Point::Point(Point const &obj) : x(obj.x), y(obj.y)
{
	return ;
}

Point::~Point() {}

Point &Point::operator = (const Point &src)
{
	this->setX(src.x);
	this->setY(src.y);
	return (*this);
}

void	Point::setX(Fixed const &src)
{
	Fixed	*ptr;

	ptr = (Fixed *)(&this->x);
	*ptr = src;
}

void	Point::setY(Fixed const &src)
{
	Fixed	*ptr;

	ptr = (Fixed *)(&this->y);
	*ptr = src;
}

int	Point::getX(void) const
{
	return (x.getRawBits());
}

int	Point::getY(void) const
{
	return (y.getRawBits());
}
