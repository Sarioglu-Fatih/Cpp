/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:08:33 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/17 14:32:00 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/******************************** Constructor *********************************/

Fixed::Fixed()
{
	setRawBits(0);
}



Fixed::Fixed(int const nb)
{
	setRawBits(nb << bit);
}

Fixed::Fixed(float const f)
{
	this->nb = roundf(f * (1 << bit));
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
	return ;
}

/******************************* Destructor *********************************/

Fixed::~Fixed() {}

/******************************* Fonction ***********************************/

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

/************************** Overloaded fonction *****************************/

Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.nb < b.nb)
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.nb < b.nb)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.nb > b.nb)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.nb > b.nb)
		return (a);
	return (b);
}

/********************** Comparison operator overload ************************/

Fixed	&Fixed::operator = (const Fixed &src)
{
	this->nb = src.getRawBits();
	return (*this);
}

bool	Fixed::operator > (Fixed const &src) const
{
	if (src.nb < nb)
		return (true);
	return (false);
}

bool	Fixed::operator < (Fixed const &src) const
{
	if (src.nb > nb)
		return (true);
	return (false);
}

bool	Fixed::operator >= (Fixed const &src) const
{
	if (src.nb <= nb)
		return (true);
	return (false);
}

bool	Fixed::operator <= (Fixed const &src) const
{
	if (nb <= src.nb)
		return (true);
	return (false);
}

bool	Fixed::operator == (Fixed const &src) const
{
	if (src.nb == nb)
		return (true);
	return (false);
}

bool	Fixed::operator != (Fixed const &src) const
{
	if (nb != src.nb)
		return (true);
	return (false);
}

/*********************** Arithmetic operator overload **************************/

Fixed	Fixed::operator + (Fixed const &src) const
{
	Fixed	res;

	res.nb = nb + src.nb;
	return (res);
}

Fixed	Fixed::operator - (Fixed const &src) const
{
	Fixed	res;

	res.nb = nb - src.nb;
	return (res);
}

Fixed	Fixed::operator * (Fixed const &src) const
{
	Fixed	res;

	res.nb = (this->nb * ((float)src.nb / (1 << bit)));
	return (res);
}

Fixed	Fixed::operator / (Fixed const &src) const
{
	Fixed	res;

	res.nb = (this->nb / ((float)src.nb / (1 << bit)));
	return (res);
}

/********************* in./de.crement operator overload ***********************/

Fixed	Fixed::operator -- (void)
{
	this->nb--;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	res;

	res = *this;
	if (this->nb > 1)
		nb--;
	return (res);
}

Fixed	Fixed::operator ++ (void)
{
	this->nb++;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	res;

	res = *this;
	this->nb++;
	return (res);
}

std::ostream	&operator << (std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);
}
