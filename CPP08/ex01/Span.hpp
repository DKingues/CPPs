/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:29:19 by retr0             #+#    #+#             */
/*   Updated: 2026/05/05 19:37:20 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> numbers;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        ~Span();
        
        Span& operator=(const Span& other);

        void addNumber(int nbr);
        void addMultipleNumbers();
        unsigned int shortestSpan();
        unsigned int longestSpan();
        
        void printVec(void)
        {
            std::cout << "Array: ";
            for (unsigned int i = 0; i < numbers.size(); i++)
                std::cout << numbers[i] << " ";
            std::cout << std::endl;
        }

        class OutOfBoundsException : public std::exception
        {
            public:
                const char * what() const throw()
                {
                    return ("Accessed memory is out of bounds.");
                };
        };
};

#endif