/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:30:53 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/25 19:56:38 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void capitalize(std::string &string)
{
	for (std::size_t i = 0; i < string.length(); i++)
	{
		if (string[i] > 96 && string[i] < 123)
		{
			string[i] -= 32;
		}
	}
}

void plusTen(int &number)
{
	number += 10;
}

void exclamation(char &c)
{
	c = '!';
}

int main(void)
{
	std::string ArrOne[5] = {"one", "two", "three", "four", "five"};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	int arrInt[5] = {1, 2, 3, 4 , 5};
	
	iter<std::string>(ArrOne, 5, capitalize);
	for (int i = 0; i < 5; i++)
		std::cout << ArrOne[i] << std::endl;
		
	iter<int>(arrInt, 5, plusTen);
	for (int i = 0; i < 5; i++)
		std::cout << arrInt[i] << std::endl;
		
	iter<char>(c, 5, exclamation);
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << std::endl;
}