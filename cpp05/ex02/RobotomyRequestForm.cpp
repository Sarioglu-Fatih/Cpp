/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:28:40 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/26 12:05:00 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("ND", false, 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy.getName(), cpy.getSign(), cpy.getSignGrade(), cpy.getExecuteGrade())
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const &n) : Form(n, false, 72, 45)
{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	this->setForm(cpy.getName(), cpy.getSign(), cpy.getSignGrade(), cpy.getExecuteGrade());
	return (*this);
}

void	RobotomyRequestForm::doIt(const Bureaucrat &b) const
{
	std::cout << "ZZzzzzzzzzzGrrrrrrrrrrrrr" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << b.getName() << " : " << this->getName() << " robotomy successful" << std::endl;
	else
		std::cout << b.getName() << " : " << this->getName() << " robotomy failure" << std::endl;
}