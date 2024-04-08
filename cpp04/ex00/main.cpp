/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:16:35 by fsariogl          #+#    #+#             */
/*   Updated: 2023/06/27 15:10:16 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/Animal.hpp"
#include "incs/Cat.hpp"
#include "incs/Dog.hpp"
#include "incs/WrongAnimal.hpp"
#include "incs/WrongCat.hpp"

int	main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	Dog				Johnny;
	Dog				Jimmy(Johnny);
	WrongCat		Vivi;
	WrongCat		Timmy(Vivi);
	WrongAnimal		Jessy;
	WrongAnimal		Teddy(Jessy);
	WrongAnimal		*Bobby = new WrongCat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << Johnny.getType() << std::endl;
	std::cout << Vivi.getType() << std::endl;
	Vivi.makeSound();
	Jessy.makeSound();
	Johnny = Jimmy;
	Vivi = Timmy;
	Jessy = Teddy;

	std::cout << std::endl;
	Bobby->makeSound();

	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
	delete Bobby;

	return (0);
}