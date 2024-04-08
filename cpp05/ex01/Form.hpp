/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:23:49 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/22 16:17:59 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public :
		Form();
		~Form();
		Form(const Form &cpy);
		Form(std::string n, bool s, int sg, int eg);

		Form				&operator=(const Form &cpy);
		std::string			getName() const;
		bool				getSign() const;
		int					getSignGrade() const;
		int					getExecuteGrade() const;
		void				beSigned(const Bureaucrat &b);

		class				GradeTooHighException : public std::exception
		{
			public :
				const char	*what() const throw()
				{
					return ("Grade is too high");
				}
		};

		class				GradeTooLowException : public std::exception
		{
			public :
				const char	*what() const throw()
				{
					return ("Grade is too low");
				}
		};

	private :
		std::string const	name;
		bool				sign;
		int const			signGrade;
		int	const			executeGrade;
		
};

std::ostream	&operator<<(std::ostream &os, const Form &f);

#endif