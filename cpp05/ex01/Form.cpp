/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:23:48 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/22 15:33:43 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("ND"), sign(false), signGrade(1), executeGrade(1)
{

}

Form::~Form()
{

}

Form::Form(const Form &cpy) : name(cpy.name), sign(cpy.sign), signGrade(cpy.signGrade), executeGrade(cpy.executeGrade)
{

}

Form::Form(std::string n, bool s, int sg, int eg) : name(n), sign(s), signGrade(sg), executeGrade(eg)
{
	if (sg < 1 || eg < 1)
		throw Form::GradeTooHighException();
	else if (sg > 150 || eg > 150)
		throw Form::GradeTooLowException();
	
}

std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getSign() const
{
	return (this->sign);
}

int	Form::getSignGrade() const
{
	return (this->signGrade);
}

int	Form::getExecuteGrade() const
{
	return (this->executeGrade);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->signGrade)
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}

Form	&Form::operator=(const Form &cpy)
{
	(std::string &)this->name = cpy.name;
	this->sign = cpy.sign;
	(int &)this->signGrade = cpy.signGrade;
	(int &)this->executeGrade = cpy.executeGrade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Form &f)
{
	if (f.getSign() == true)
		return (os << f.getName() << " form is signed, you must be " << f.getSignGrade() << " for sign and " << f.getExecuteGrade() << " for execute.");
	else
		return (os << f.getName() << " form is not signed, you must be " << f.getSignGrade() << " for sign and " << f.getExecuteGrade() << " for execute.");
}