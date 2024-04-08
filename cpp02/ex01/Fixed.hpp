/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:08:19 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/14 19:42:53 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(int const nb);
		Fixed(float const f);
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed				&operator = (Fixed const &src);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
	private:
		int					nb;
		static const int	bit = 8;
};

std::ostream	&operator << (std::ostream &out, Fixed const &src);

#endif
