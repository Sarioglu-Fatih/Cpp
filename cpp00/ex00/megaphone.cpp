/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:43:38 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/03 16:07:47 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	c = 0;
	int	l = 1;

	
	while (av[l])
	{
		c = 0;
		while (av[l][c])
		{
			av[l][c] = toupper(av[l][c]);
			std::cout << av[l][c] << std::flush;
			c++;
		}
		l++;
	}
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::flush;
	std::cout << std::endl;
	return (0);
}