/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 01:06:25 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/23 04:06:29 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	std::ifstream	urandom("/dev/urandom", std::ios::in);
	if (!urandom)
	{
		std::cerr << "ERROR: cannot open urandom" << std::endl;
		return (NULL);
	}
	unsigned char	t_rvalue;
	size_t			rvalue;

	urandom.read(reinterpret_cast<char *>(&t_rvalue), sizeof(t_rvalue));
	urandom.close();
	rvalue = (int)t_rvalue % 3;
	if (rvalue  == 0)
		return (new A);
	else if (rvalue == 1)
		return (new B);
	else
		return (new C);
	return (NULL);
}

void	identify(Base *p)
{
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);
	
	if (a)
		std::cout << "This base is A" << std::endl;
	else if (b)
		std::cout << "This base is B" << std::endl;
	else if (c)
		std::cout << "This base is C" << std::endl;
	else
		std::cout << "This is not a base" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&ref = dynamic_cast<A&>(p);
		std::cout << "This base is A" << std::endl;
		(void)ref;
	}
	catch (std::exception &e) {}

	try
	{
		B	&ref = dynamic_cast<B&>(p);
		std::cout << "This base is B" << std::endl;
		(void)ref;
	}
	catch (std::exception &e) {}

	try
	{
		C	&ref = dynamic_cast<C&>(p);
		std::cout << "This base is C" << std::endl;
		(void)ref;
	}
	catch (std::exception &e) {}
}