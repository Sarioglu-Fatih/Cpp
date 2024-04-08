/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:12:41 by fsariogl          #+#    #+#             */
/*   Updated: 2023/05/04 18:15:34 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	&stringREF = str;
	std::string	*stringPTR;

	stringPTR = &str;
	std::cout << &str << "\n" << stringPTR << "\n" << &stringREF << "\n" << std::endl;
	std::cout << str << "\n" << (*stringPTR) << "\n" << stringREF << "\n" << std::endl;
	return (0);
}