/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:29:19 by retr0             #+#    #+#             */
/*   Updated: 2026/05/06 18:09:55 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <exception>
#include <iterator>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>

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

        void addNumber(size_t nbr);
        size_t shortestSpan();
        size_t longestSpan();
        
        template <typename Iterator> void addMultipleNumbers(Iterator begin, Iterator end)
        {
            size_t dist = std::distance(begin, end);
        
            if (numbers.size() + dist > _N)
                throw (OutOfBoundsException());
        
            numbers.insert(numbers.end(), begin, end); 
        };
        
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