/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:34:16 by retr0             #+#    #+#             */
/*   Updated: 2026/05/06 18:13:26 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){};

Span::Span(unsigned int N) : _N(N) 
{
    numbers.reserve(_N) ;  
};

Span::Span(const Span& other)
{
    *this = other;
};

Span::~Span(){};
        
Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        _N = other._N;
    }
    return (*this);
}

void Span::addNumber(size_t nbr)
{
    if (numbers.size() >= _N)
        throw (OutOfBoundsException());
    numbers.push_back(nbr);
};

size_t Span::shortestSpan()
{
    size_t shortestSpan = 4294967295;
    size_t temp = 0;

    if (numbers.size() <= 1)
        throw(OutOfBoundsException());

    for (size_t i = 0; i < numbers.size(); i++)
    {
        for (size_t j = 0; j < numbers.size(); j++)
        {
            switch (numbers[i] > numbers[j])
            {
                case 0:
                    temp = numbers[j] - numbers[i];
                    break;
                case 1:
                    temp = numbers[i] - numbers[j];
                    break;
            }
            if (temp < shortestSpan && temp != 0)
                shortestSpan = temp;
        }
    }
    return (shortestSpan);
};

size_t Span::longestSpan()
{
    size_t longestSpan = 0;
    size_t temp = 0;

    if (numbers.size() <= 1)
        throw(OutOfBoundsException());

    for (size_t i = 0; i < numbers.size(); i++)
    {
        for (size_t j = 0; j < numbers.size(); j++)
        {
            switch (numbers[i] > numbers[j])
            {
                case 0:
                    temp = numbers[j] - numbers[i];
                    break;
                case 1:
                    temp = numbers[i] - numbers[j];
                    break;
            }
            if (temp > longestSpan && temp != 0)
                longestSpan = temp;
        }
    }
    return (longestSpan);  
};
