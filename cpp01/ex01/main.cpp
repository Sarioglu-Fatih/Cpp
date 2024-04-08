/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:38:09 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/11 11:45:44 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *test;

	test = zombieHorde(3, "boby");
	test[0].announce();
	test[1].announce();
	test[1].announce();
	test[2].announce();
	delete [] test;
	return (0);
}