/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:34:16 by retr0             #+#    #+#             */
/*   Updated: 2026/05/05 21:59:00 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){};

Span::Span(unsigned int N) : _N(N) {};

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

void Span::addNumber(int nbr)
{
    if (_N > 0)
    {
        numbers.push_back(nbr);
        _N--;
    }
    else
        throw(OutOfBoundsException());
};

void Span::addMultipleNumbers()
{
    
};

unsigned int Span::shortestSpan()
{
    unsigned int shortestSpan = 4294967295;
    unsigned int temp = 0;

    if (numbers.size() <= 1)
        throw(OutOfBoundsException());

    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        for (unsigned int j = 0; j < numbers.size(); j++)
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

unsigned int Span::longestSpan()
{
    unsigned int longestSpan = 0;
    unsigned int temp = 0;

    if (numbers.size() <= 1)
        throw(OutOfBoundsException());

    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        for (unsigned int j = 0; j < numbers.size(); j++)
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

