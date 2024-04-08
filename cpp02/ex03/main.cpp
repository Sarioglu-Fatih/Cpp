/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:08:13 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/17 14:29:35 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point	a(0, 1);
	Point	b(24, 2);
	Point	c(1, 25);
	Point	point(9, 8);

	if (bsp(a, b, c, point) == 0)
		std::cout << "FALSE" << std::endl;
	else
		std::cout << "TRUE" << std::endl;
	return 0;
}
