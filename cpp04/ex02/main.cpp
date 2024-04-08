/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:16:35 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/27 19:33:07 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/Animal.hpp"
#include "incs/Cat.hpp"
#include "incs/Dog.hpp"
#include "incs/WrongAnimal.hpp"
#include "incs/WrongCat.hpp"
#include "incs/Brain.hpp"

int	main(void)
{
	const Animal	*A[10];

	for (int i = 0; i < 5; i++)
		A[i] = new Dog;
	std::cout << std::endl;
	for (int i = 5; i < 10; i++)
		A[i] = new Cat;

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete A[i];

	std::cout << std::endl;
	Dog	basic;
	basic.setIdea("hello", 4);
	{
		Dog tmp = basic;
		std::cout << std::endl;
		std::cout << tmp.getIdea(4) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (0);
}