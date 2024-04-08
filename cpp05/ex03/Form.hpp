/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:23:49 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/26 12:04:29 by fsariogl         ###   ########.fr       */
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
		virtual ~Form() = 0;
		Form(const Form &cpy);
		Form(std::string n, bool s, int sg, int eg);

		Form				&operator=(const Form &cpy);
		std::string			getName() const;
		bool				getSign() const;
		int					getSignGrade() const;
		int					getExecuteGrade() const;
		void				setSign(bool b);
		void				setForm(std::string n, bool b, int sg, int eg);
		void				virtual beSigned(const Bureaucrat &b);
		void				execute(Bureaucrat const &executor) const;
		void				virtual doIt(Bureaucrat const &executor) const = 0;

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
		class				FormIsNotSigned : public std::exception
		{
			public :
				const char	*what() const throw()
				{
					return ("Form is not signed");
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