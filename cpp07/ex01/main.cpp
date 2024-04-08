/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:37:48 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/25 06:53:29 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	*A = new Data;
	Data	*B;

	std::cout << &A << std::endl;

	(*A).nb = 15;
	(*A).str = "hello";
	uintptr_t	ptr = Serializer::serialize(A);

	std::cout << ptr << "\t" << &A << std::endl;

	B = Serializer::deserialize(ptr);

	std::cout << (*B).nb << "\t" << (*B).str << std::endl;

	delete A;

	std::cout << (*B).nb << "\t" << (*B).str << std::endl;

	return (0);
}