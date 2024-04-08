/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:15:52 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/01 16:29:13 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/AMateria.hpp"
#include "incs/Cure.hpp"
#include "incs/Ice.hpp"
#include "incs/Character.hpp"
#include "incs/MateriaSource.hpp"

int	main(void)
{
	AMateria	*A = new Cure();
	AMateria	*B = new Ice();
	Character	Tommy("Tommy");
	Character	Bobby("Bobby");
	
	Bobby.equip(A);
	Bobby.equip(B);
	Bobby.use(0, Bobby);
	Bobby.use(1, Bobby);
	Bobby.use(2, Bobby);
	Tommy = Bobby;
	Tommy.use(1, Tommy);
	Bobby.unequip(0);

	std::cout << "\n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* Candy = new Character("Candy");
	me->use(0, *Candy);
	me->use(1, *Candy);
	delete Candy;
	delete me;
	delete src;

	std::cout << "\n" << std::endl;

	IMateriaSource* Nany = new MateriaSource();
    Nany->learnMateria(new Cure());
    Nany->learnMateria(new Ice());

    ICharacter* Pathy = new Character("Pathy");
    ICharacter* Charly = new Character("Charly");
    AMateria* Timmy;
    Timmy = Nany->createMateria("ice");
    Charly->equip(Timmy);
    Timmy = Nany->createMateria("cure");
    Charly->equip(Timmy); 
    Timmy = Nany->createMateria("cure");
    Charly->equip(Timmy);
    Timmy = Nany->createMateria("cure");
    Charly->equip(Timmy);
    Charly->unequip(0);
    Charly->unequip(1);
    Charly->unequip(2);
    Timmy = Nany->createMateria("cure");
    Charly->equip(Timmy);
    Charly->use(0, *Pathy);
    Charly->use(1, *Pathy);
    Charly->use(2, *Pathy);
    Charly->use(3, *Pathy);

    delete Nany;   
    delete Pathy;
    delete Charly;
    {
        Character Pathy = Character("Pathy");
        Character Charly = Character("Charly");
        Pathy = Charly;
    }
	return (0);
}