/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:03:52 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/11 13:43:23 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl is created\n" << std::endl;
}

Harl::~Harl()
{
	std::cout << "\nHarl is destroyed" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i;
	std::string	arg[4];
	void		(Harl::*fxptr[4])(void);

	i = 0;
	arg[0] = "DEBUG";
	arg[1] = "INFO";
	arg[2] = "WARNING";
	arg[3] = "ERROR";
	fxptr[0] = &Harl::debug;
	fxptr[1] = &Harl::info;
	fxptr[2] = &Harl::warning;
	fxptr[3] = &Harl::error;
	while (i < 4 && arg[i] != level)
		i++;
	while (i < 4)
	{
		switch(i)
		{
			case 0:
				(this->*fxptr[0])();
				break ;
			case 1:
				(this->*fxptr[1])();
				break;
			case 2:
				(this->*fxptr[2])();
				break ;
			case 3:
				(this->*fxptr[3])();
				break ;
			default:
				std::cout << "Please put DEBUG INFO WARNING or ERROR" << std::endl;
		}
		i++;
	}
}