/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:20:08 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/17 14:32:06 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	public:
		Point();
		Point(Point const &obj);
		Point(float const x, float const y);
		~Point();
		int		getX(void) const;
		int		getY(void) const;
		void	setX(Fixed const &src);
		void	setY(Fixed const &src);

		Point	&operator = (const Point &src);

	private:
		Fixed const	x;
		Fixed const	y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
