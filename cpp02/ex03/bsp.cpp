/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:59:04 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/17 14:32:04 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

long	getSide(Point const a, Point const b)
{
	long	xa;
	long	xb;
	long	ya;
	long	yb;
	long	opposite;
	long	adjacent;

	xa = a.getX();
	xb = b.getX();
	ya = a.getY();
	yb = b.getY();
	opposite = 0;
	adjacent = 0;
	while (xa < xb)
	{
		xa++;
		adjacent++;
	}
	while (xa > xb)
	{
		xa--;
		adjacent++;
	}
	while (ya < yb)
	{
		ya++;
		opposite++;
	}
	while (ya > yb)
	{
		ya--;
		opposite++;
	}
	return (sqrt((adjacent * adjacent) + (opposite * opposite)));
}

long	area(Point const a, Point const b, Point const c)
{
	long	side_a;
	long	side_b;
	long	side_c;
	long	half_p;

	side_a = getSide(a, b);
	side_b = getSide(a, c);
	side_c = getSide(b, c);
	half_p = (side_a + side_b + side_c) / 2;
	return (sqrt(half_p * (half_p - side_a) * (half_p - side_b) * (half_p - side_c)));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	long	pab;
	long	pac;
	long	pbc;
	double	diff;

	pab = area(point, a, b);
	pac = area(point, a, c);
	pbc = area(point, b, c);
	diff = (double)(pab + pac + pbc) / (double)(area(a, b, c)) * 100;
	if (pab == 0 || pac == 0 || pbc == 0)
		return (false);
	if (diff > 99.8 && diff < 100)
		return (true);
	return (false);
}
