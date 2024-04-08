/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:15:42 by fsariogl          #+#    #+#             */
/*   Updated: 2023/08/30 18:11:44 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	



	std::cout << "\n\n" << std::endl;
	MutantStack<std::string>	MyStack;

	std::cout << "MyStack is empty ? " << (MyStack.empty() ? "Yes" : "No") << std::endl;

	MyStack.push("Hello ");
	MyStack.push("how ");
	MyStack.push("are ");
	MyStack.push("you ");
	MyStack.push("today");
	
	std::cout << "And Now ? " << (MyStack.empty() ? "Yes" : "No") << std::endl;

	std::cout << "How many element you have ? " << MyStack.size() << std::endl;

	MyStack.pop();

	std::cout << "And now ? " << MyStack.size() << "\n" << std::endl;

	std::cout << "Show theme all !" << std::endl;

	MutantStack<std::string>::iterator	a = MyStack.begin();
	MutantStack<std::string>::iterator	z = MyStack.end();

	while (a != z)
	{
		std::cout << *a << std::endl;
		a++;
	}

	return 0;
}