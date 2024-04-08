/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:33:30 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/21 12:46:46 by fsariogl         ###   ########.fr       */
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

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &b)
{
	return (os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".");
}