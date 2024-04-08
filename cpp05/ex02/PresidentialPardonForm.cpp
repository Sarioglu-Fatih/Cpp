/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:44:47 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/26 14:44:13 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("ND", false, 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(cpy.getName(), cpy.getSign(), cpy.getSignGrade(), cpy.getExecuteGrade())
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &n) : Form(n, false, 25, 5)
{
	
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	this->setForm(cpy.getName(), cpy.getSign(), cpy.getSignGrade(), cpy.getExecuteGrade());
	return (*this);
}

void	PresidentialPardonForm::doIt(const Bureaucrat &b) const
{
	std::cout << b.getName() << " : " << this->getName() << " is forgeven by Zaphod Beeblebrox" << std::endl;
}