/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:46:45 by fsariogl          #+#    #+#             */
/*   Updated: 2023/07/26 16:31:33 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <stdlib.h>

class	RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &cpy);
		RobotomyRequestForm(std::string const &n);

		RobotomyRequestForm	&operator=(const RobotomyRequestForm  &cpy);
		void				doIt(const Bureaucrat &b) const;
};

#endif