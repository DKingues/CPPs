/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:28:52 by retr0             #+#    #+#             */
/*   Updated: 2026/05/06 19:40:46 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    std::srand(std::time(0));
    Span A(4);
    Span Empty(0);
    Span B(10000);
    std::vector<int> toAdd(10000);

    for (size_t i = 0; i < toAdd.size(); i++)
        toAdd[i] = rand() % 10001;

    try
    {
        std::cout <<  std::endl << "Creating 4 number container." << std::endl << "Container: [12, 1, 11, 4]" << std::endl;
        A.addNumber(12);
        A.addNumber(1) ;
        A.addNumber(11);
        A.addNumber(4);
        std::cout << "Shortest span: " << A.shortestSpan() << std::endl;
        std::cout << "Longest span: " << A.longestSpan() << std::endl;
    }
    catch (Span::OutOfBoundsException &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout <<  std::endl << "Creating a empty container and trying to fill it." << std::endl;
        Empty.addNumber(10);
    }
    catch (Span::OutOfBoundsException &e)
    {
        std::cout << e.what() << std::endl;   
    }
    try
    {
        std::cout << std::endl << "Creating 10000 space container and filling it with 10000 random values." << std::endl;
        B.addMultipleNumbers(toAdd.begin(), toAdd.end());
        std::cout << "Trying to add 1 more number." << std::endl;
        B.addNumber(0);
    }
    catch (Span::OutOfBoundsException &e)
    {
        std::cout << e.what() << std::endl;
    }
}