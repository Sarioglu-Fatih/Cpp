/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:12:41 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/26 12:05:07 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("_shrubbery", false, 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(target, false, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : Form(cpy.getName(), cpy.getSign(), cpy.getSignGrade(), cpy.getExecuteGrade())
{

}

void	ShrubberyCreationForm::doIt(const Bureaucrat &b) const
{
	std::cout << b.getName() << " creat shrubbery" << std::endl;
	std::string	title = this->getName() + "_shrubbery";
	char	*newTitle = const_cast<char*>(title.c_str());
	std::ofstream	f(newTitle);
	f << "     oo     " << std::endl;
	f << "    oooo    " << std::endl;
	f << "  oooooooo  " << std::endl;
	f << " oooooooooo " << std::endl;
	f << "oooooooooooo" << std::endl;
	f << "oooooooooooo" << std::endl;
	f << " oooooooooo " << std::endl;
	f << "  oooooooo  " << std::endl;
	f << "     ||     " << std::endl;
	f << "    _||_    " << std::endl;
	f.close();
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	this->setForm(cpy.getName(), cpy.getSign(), cpy.getSignGrade(), cpy.getExecuteGrade());
	return (*this);
}