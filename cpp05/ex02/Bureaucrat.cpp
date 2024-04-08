/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:33:30 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/26 14:13:54 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("ND"), grade(150)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string const n, int g) : name(n)
{
	if (g < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (g > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : name(cpy.name)
{
	this->grade = cpy.grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &cpy)
{
	(std::string&)this->name = cpy.name;
	this->grade = cpy.grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increment()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void	Bureaucrat::decrement()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

void	Bureaucrat::signForm(const Form &f) const
{
	if (this->grade <= f.getSignGrade())
		std::cout << this->name << " signed " << f.getName() << std::endl;
	else
		std::cout << this->name << " couldn't sign " << f.getName() << " beacause his grade is too low." << std::endl;
}

void	Bureaucrat::executeForm(Form const &form)
{
	if (this->grade > form.getExecuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (form.getSign() == false)
		throw Form::FormIsNotSigned();
	else
	{
		std::cout << this->name << " executed " << form.getName() << std::endl;
		form.doIt(*this);
	}
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b)
{
	return (os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".");
}