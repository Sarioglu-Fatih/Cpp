/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:24:42 by fsariogl          #+#    #+#             */
/*   Updated: 2023/09/04 19:52:50 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	parsing(const std::string &av)
{
	if (av.length() == 0)
		return (false);
	for (unsigned int i = 0; av[i]; i++)
	{
		if (av[i] == ' ' || isdigit(av[i]) || av[i] == '+' || av[i] == '-' || av[i] == '*' || av[i] == '/')
			;
		else
			return (false);
		if (isdigit(av[i]) && isdigit(av[i + 1]))
			return (false);
	}
	return (true);
}

static double	op(double nb2, double nb1, const char &o)
{
	switch (o)
	{
		case '+':
			return (nb1 + nb2);
		case '-':
			return (nb1 - nb2);
		case '*':
			return (nb1 * nb2);
		case '/':
			return (nb1 / nb2);
	}
	return (0);
}

bool	exec(const std::string &av)
{
	std::stack<double>	S;
	double				nb1;
	double				nb2;

	for (unsigned int i = 0; av[i]; i++)
	{
		if (isdigit(av[i]))
			S.push(atoi(av.substr(i, 1).c_str()));
		if (av[i] == '/' || av[i] == '*' || av[i] == '-' || av[i] == '+')
		{
			if (S.size() < 2)
				return (false);
			nb1 = S.top();
			S.pop();
			nb2 = S.top();
			S.pop();
			S.push(op(nb1, nb2, av[i]));
		}
	}
	if (S.size() != 1)
		return (false);
	std::cout << S.top() << std::endl;
	return (true);
}