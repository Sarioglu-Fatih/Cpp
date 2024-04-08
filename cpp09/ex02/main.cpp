/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:54:32 by fsariogl          #+#    #+#             */
/*   Updated: 2023/09/08 13:45:17 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void printList(std::vector<int> &theVector){
    std::vector<int>::iterator ite;
    std::cout << "Before:  ";
    for (ite = theVector.begin(); ite != theVector.end(); ite++)
        std::cout << *ite << " ";
    std::cout << std::endl;
}

void printDeque(std::deque<int> &theQue){
    std::deque<int>::iterator ite;
    std::cout << "After:   ";
    for (ite = theQue.begin(); ite != theQue.end(); ite++)
        std::cout << *ite << " ";
    std::cout << std::endl;
}

int check_double(std::vector<int> &theVector, int num){
    std::vector<int>::iterator ite;
    for (ite = theVector.begin(); ite != theVector.end(); ite++){
        if (*ite == num){
            std::cout << "comp " << (*ite) << " " << (num) <<std::endl;
            return 0;
        }
    }
    return 1;
}

int stdIsDigit(std::string num){
    if (num.size() > 10)
        return 0;
    if (num.size() == 10 && num.compare("2147483647") > 0)
        return 0;
    for (size_t index = 0; index < num.size(); index++){
        if(!std::isdigit(num[index]))
            return 0;
    }
    return 1;
}

int fileContainers(int ac, char **av, std::vector<int> &theVector, std::deque<int> &theDeque){
    for (int index = 1; index < ac; index++)
    {
        if (!stdIsDigit(av[index])){
            std::cout << "Error: isn't digit." << std::endl; 
            return (0);
        }
        int num = std::atoi(av[index]);
        if (!check_double(theVector, num))
        {
            std::cout << "Error: identique argument."; 
            return (0);
        }
        theVector.push_back(num);
        theDeque.push_back(num);
    }
    return (1);
}

int main (int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "Error: need numbers" << std::endl;
        return (-1);        
    }
    std::vector<int> theVector;
    std::deque<int> theDeque;
    if(!fileContainers(ac, av, theVector, theDeque))
        return (-1);
    printList(theVector);
    std::clock_t start_L = std::clock();
    sortVector(theVector, theVector.begin(), theVector.end(), 1);
    std::clock_t end_L = std::clock();
    std::clock_t start_D = std::clock();
    sortDeque(theDeque, 0, theDeque.size() - 1, 1);
    std::clock_t end_D = std::clock();
    printDeque(theDeque);
    std::cout << "Time to process a range of " << theDeque.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << (double)(end_L - start_L) * 100 / CLOCKS_PER_SEC << "ms" << std::endl;
    std::cout << "Time to process a range of " << theDeque.size() << " elements with std::deque : " << std::fixed << std::setprecision(5) << (double)(end_D - start_D) * 100 / CLOCKS_PER_SEC << "ms" << std::endl;
    return 0;
}