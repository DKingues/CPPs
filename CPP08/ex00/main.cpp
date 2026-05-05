/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:13:15 by retr0             #+#    #+#             */
/*   Updated: 2026/05/05 18:55:15 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main(void)
{
    std::vector<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    
    try
    {
        std::cout << "Array: ";
        for (unsigned int i = 0; i < numbers.size(); i++)
            std::cout <<  numbers[i] << " ";
        std::cout << std::endl;
        std::cout << "Position of 3 is: " << easyfind<std::vector<int> >(numbers, 3) << std::endl;
        std::cout << "Position of 1 is: " << easyfind<std::vector<int> >(numbers, 1) << std::endl;
        std::cout << "Position of 9 is: " << easyfind<std::vector<int> >(numbers, 9) << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << "No number found." << '\n';
    }
}