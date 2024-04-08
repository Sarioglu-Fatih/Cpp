/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:53:48 by fsariogl          #+#    #+#             */
/*   Updated: 2023/09/08 14:29:36 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void insertVector(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
  std::vector<int>::iterator ite;
  for (ite = start; ite != end; ++ite)
  {
    std::vector<int>::iterator iteTemp = ite;
    ++iteTemp;
    int temp = *iteTemp;
    while (iteTemp != ite && *iteTemp > temp)
      *iteTemp = *(--iteTemp);
    *iteTemp = temp;
  }
}

void mergeVector(std::vector<int>::iterator start, std::vector<int>::iterator mid, std::vector<int>::iterator end)
{
  std::vector<int> firstList(start, mid);
  std::vector<int> secondList(mid, end);

  std::vector<int>::iterator iteFirst = firstList.begin();
  std::vector<int>::iterator iteSecond = secondList.begin();
  std::vector<int>::iterator ite = start;

  while (iteFirst != firstList.end() && iteSecond != secondList.end())
  {
    if (*iteSecond > *iteFirst)
    {
      *ite = *iteFirst;
      ++iteFirst;
    }
    else
    {
      *ite = *iteSecond;
      ++iteSecond;
    }
    ++ite;
  }

  while (iteFirst != firstList.end())
  {
    *ite = *iteFirst;
    ++iteFirst;
    ++ite;
  }

  while (iteSecond != secondList.end())
  {
    *ite = *iteSecond;
    ++iteSecond;
    ++ite;
  }
}

void sortVector(std::vector<int>& theVector, std::vector<int>::iterator start, std::vector<int>::iterator end, int midle)
{
  int size = std::distance(start, end);
  if (size > midle)
  {
    std::vector<int>::iterator mid = start;
    std::advance(mid, size / 2);

    sortVector(theVector, start, mid, midle);
    sortVector(theVector, mid, end, midle);
    mergeVector(start, mid, end);
  }
  else
    insertVector(start, end);
}

void insertDeque(std::deque<int>& theDeque, size_t start, size_t end)
{
  for (size_t i = start + 1; i <= end; ++i)
  {
    int temp = theDeque[i];
    size_t j = i - 1;
    for (size_t j = i - 1; j >= start && theDeque[j] > temp; --j)
      theDeque[j + 1] = theDeque[j];
    theDeque[j + 1] = temp;
  }
}

void mergeDeque(std::deque<int>& theDeque, size_t start, size_t mid, size_t end)
{
  std::deque<int> firstDeque(theDeque.begin() + start, theDeque.begin() + mid + 1);
  std::deque<int> secondDeque(theDeque.begin() + mid + 1, theDeque.begin() + end + 1);

  size_t i = 0;
  size_t j = 0;
  size_t k = start;

  while (i < firstDeque.size() && j < secondDeque.size())
  {
    if (firstDeque[i] <= secondDeque[j])
    {
      theDeque[k] = firstDeque[i];
      ++i;
    }
    else
    {
      theDeque[k] = secondDeque[j];
      ++j;
    }
    ++k;
  }

  while (i < firstDeque.size())
  {
    theDeque[k] = firstDeque[i];
    ++i;
    ++k;
  }

  while (j < secondDeque.size())
  {
    theDeque[k] = secondDeque[j];
    ++j;
    ++k;
  }
}

void sortDeque(std::deque<int>& theDeque, size_t start, size_t end, size_t midle)
{
    size_t size = end - start + 1;
    if (size > midle)
    {
      size_t mid = start + (end - start) / 2;

      sortDeque(theDeque, start, mid, midle);
      sortDeque(theDeque, mid + 1, end, midle);
      mergeDeque(theDeque, start, mid, end);
    }
    else
      insertDeque(theDeque, start, end);
}