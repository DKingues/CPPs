/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:28:52 by retr0             #+#    #+#             */
/*   Updated: 2026/05/05 22:01:45 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// void findClosestNumber()
// {
//     int arr[7] = {10, 1, 4, 9, 11, 16, 13};

//     int i = 0;
//     int lowest = 0;
//     while (i < 7)
//     {
//        int j = 0;
//         while (j < 7)
//         {
//             std::cout << "gap between " << arr[i] << " to " << arr[j] << std::endl;
//             int temp = 0;
//             if (arr[i] > arr[j])
//                 temp = arr[i] - arr[j];
//             else if (arr[j] > arr[i])
//                 temp = arr[j] - arr[i];
//             if ((temp < lowest && temp != 0) || lowest == 0)
//                 lowest = temp;
//             std::cout << lowest << std::endl;
//             j++;
//         }
//         i++;
//     }
// }


int main(void)
{
    Span A(10);
    Span Empty(0);

    try
    {
        A.addNumber(12);
        A.addNumber(1) ;
        A.addNumber(11);
        A.addNumber(4);
        A.addMultipleNumbers();
        A.printVec();
        std::cout << "The shortest span in this list is: " << A.shortestSpan() << std::endl;
        std::cout << "The longest span in this list is: " << A.longestSpan() << std::endl;
    }
    catch (Span::OutOfBoundsException &e)
    {
        std::cout << e.what() << std::endl;
    }
}