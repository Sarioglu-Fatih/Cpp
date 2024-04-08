/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 00:05:45 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/23 23:49:16 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	*p = generate();
	Base	&ref = *p;

	identify(p);
	identify(ref);
	delete p;
	identify(NULL);

	return (0);
}