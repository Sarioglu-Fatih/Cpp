/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:33:32 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/21 12:44:03 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat
{
	public :
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat(std::string const n, int g);

		Bureaucrat			&operator=(const Bureaucrat &cpy);

		std::string			getName() const;
		int					getGrade() const;
		void				increment();
		void				decrement();
		
		class				GradeTooHighException : public std::exception
		{
			public :
				const char	*what() const throw()
				{
					return ("Grade too high");
				}
		};
		class				GradeTooLowException : public std::exception
		{
			public :
				const char	*what() const throw()
				{
					return ("Grade too low");
				}
		};
	private :
		std::string const	name;
		int					grade;
};

std::ostream		&operator<<(std::ostream &os, const Bureaucrat &b);

#endif