/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:40:20 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/25 18:29:26 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int valueOne = 33;
	int valueTwo = 41;
	double valueOneDouble = 2.5;
	double valueTwoDouble = 5.3;

	std::cout << "Value one: " << valueOne << std::endl;
	std::cout << "Value two: " << valueTwo << std::endl;
	std::cout << "Value one double: " << valueOneDouble << std::endl;
	std::cout << "Value two double: " << valueTwoDouble << std::endl << std::endl;
	
	std::cout << "Now we will swap Value one and Value two and reprint." << std::endl << std::endl;

	swap<int>(valueOne, valueTwo);
	swap<double>(valueOneDouble, valueTwoDouble);
	std::cout << "Value one: " << valueOne << std::endl;
	std::cout << "Value two: " << valueTwo << std::endl;
	std::cout << "Value one double: " << valueOneDouble << std::endl;
	std::cout << "Value two double: " << valueTwoDouble << std::endl << std::endl;

	std::cout << "Now we will print the biggest values among each type pair." << std::endl << std::endl;

	std::cout << "Biggest number between Value one and value two is: " << max<int>(valueOne, valueTwo) << std::endl;
	std::cout << "Smallest number between Value one and value two is: " << min<int>(valueOne, valueTwo) << std::endl;
	std::cout << "Biggest number between Value one double and value two double is: " << max<double>(valueOneDouble, valueTwoDouble) << std::endl;
	std::cout << "Smallest number between Value one double and value two double is: " << min<double>(valueOneDouble, valueTwoDouble) << std::endl;
};