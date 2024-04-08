/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:08:46 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/17 14:08:51 by fsariogl         ###   ########.fr       */
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
		explicit Fixed(int const nb);
		explicit Fixed(float const f);
		Fixed(const Fixed &obj);
		// Constructor

		// Destructor
		~Fixed();

		// Fonction
		int					toInt			(void) const;
		float				toFloat			(void) const;
		int					getRawBits		(void) const;
		void				setRawBits		(int const raw);

		// Comparison operator overload
		Fixed				&operator	=	(Fixed const &src);
		bool				operator	>	(Fixed const &src) const;
		bool				operator	<	(Fixed const &src) const;
		bool				operator	>=	(Fixed const &src) const;
		bool				operator	<=	(Fixed const &src) const;
		bool				operator	==	(Fixed const &src) const;
		bool				operator	!=	(Fixed const &src) const;

		// Arithmetic operator overlad
		Fixed				operator	+	(Fixed const &src) const;
		Fixed				operator	-	(Fixed const &src) const;
		Fixed				operator	*	(Fixed const &src) const;
		Fixed				operator	/	(Fixed const &src) const;

		// in./de.crement operator overload
		Fixed				operator	--	(void);
		Fixed				operator	--	(int);
		Fixed				operator	++	(void);
		Fixed				operator	++	(int);

		// Overloaded fonction
		static Fixed		min				(Fixed &a, Fixed &b);
		static Fixed		max				(Fixed &a, Fixed &b);
		static Fixed 		min				(const Fixed &a, const Fixed &b);
		static Fixed		max				(Fixed const &a, Fixed const &b);

	private:
		int					nb;
		static const int	bit = 8;
};

std::ostream	&operator << (std::ostream &out, Fixed const &src);

#endif
