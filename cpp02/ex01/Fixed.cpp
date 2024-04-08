/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:08:00 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/16 12:42:10 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	this->nb = src.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream	&operator << (std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);
}

Fixed::Fixed(int const nb)
{
	setRawBits(nb << bit);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f)
{
	this->nb = roundf(f * (1 << bit));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (nb);
}

void	Fixed::setRawBits(int const raw)
{
	nb = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)nb / (float)(1 << bit));
}

int	Fixed::toInt(void) const
{
	return (nb / (1 << bit));
}
