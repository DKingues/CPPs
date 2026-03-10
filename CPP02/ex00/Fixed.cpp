/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-24 20:11:21 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-24 20:11:21 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    RawBits = 0;
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &toCopy)
{   
    std::cout << "Copy constructor called" << std::endl;
    *this = toCopy;
};

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        std::cout << "Copy assignment operator called." << std::endl;
        RawBits = other.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called." << std::endl;
    return (RawBits);
}

void Fixed::setRawBits(int const Raw)
{
    std::cout << "setRawBits function called." << std::endl;
    RawBits = Raw;
}
