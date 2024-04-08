/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:19:10 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/27 13:13:03 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public :
		Intern();
		~Intern();
		Intern(const Intern &cpy);

		Intern	&operator=(const Intern &cpy);
		Form		*makeForm(std::string form, std::string target);

		class	RequestNull : public std::exception
		{
			public :
				const char	*what() const throw()
				{
					return ("Form doesn't exist, please put robotomy request, shrubbery request or presidential pardon request");
				}
		};
};

#endif