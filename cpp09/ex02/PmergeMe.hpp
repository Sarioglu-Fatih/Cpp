/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:53:49 by fsariogl          #+#    #+#             */
/*   Updated: 2023/09/08 13:54:16 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <ctime>
#include <deque>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>

void	sortDeque(std::deque<int>& theDeque, size_t start, size_t end, size_t midle);
void	sortVector(std::vector<int>& theVector, std::vector<int>::iterator start, std::vector<int>::iterator end, int midle);

#endif