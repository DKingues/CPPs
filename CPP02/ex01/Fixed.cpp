/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-25 19:09:55 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-25 19:09:55 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value(0)
{
    std::cout << "[DEFAULT CONSTRUCTOR]" << std::endl;
};

Fixed::Fixed(const int i)
{
    _value = i << _fractionalBits;
    std::cout << "[INTEGER CONSTRUCTOR]" << std::endl;
};

Fixed::Fixed(const float f)
{
    _value = roundf(f * (1 << _fractionalBits));
    std::cout << "[FLOAT CONSTRUCTOR]" << std::endl;
};

Fixed::Fixed(const Fixed &toCopy)
{
    std::cout << "[COPY CONSTRUCTOR]" << std::endl;
    *this = toCopy;
};

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        this->_value = other._value;
        std::cout << "[COPY ASSIGNMENT OPERATOR]" << std::endl;
    }
    return (*this);
};

Fixed::~Fixed()
{
    std::cout << "[DESTRUCTOR]" << std::endl;
};

int Fixed::toInt(void) const
{
    return (_value >> _fractionalBits);
}

float Fixed::toFloat( void ) const
{
    return ((float)_value / (1 << _fractionalBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return (os);
}