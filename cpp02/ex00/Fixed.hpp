/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:12:59 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/12 18:08:17 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed				&operator = (Fixed const &src);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
	private:
		int					nb;
		static const int	bit = 8;
};

#endif
