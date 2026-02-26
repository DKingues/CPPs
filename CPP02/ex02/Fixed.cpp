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

Fixed::Fixed()
{
    _fractionalBits = 8;
    _value = 0;
    std::cout << "[DEFAULT CONSTRUCTOR]" << std::endl;
};

Fixed::Fixed(const int i)
{
    _fractionalBits = 8;
    _value = i << _fractionalBits;
    std::cout << "[INTEGER CONSTRUCTOR]" << std::endl;
};

Fixed::Fixed(const float f)
{
    _fractionalBits = 8;
    _value = roundf(f * (1 << _fractionalBits));
    std::cout << "[FLOAT CONSTRUCTOR]" << std::endl;
};

Fixed::Fixed(const Fixed &other)
{
    std::cout << "[COPY CONSTRUCTOR]" << std::endl;
    this->_value = other._value;
    this->_fractionalBits = other._fractionalBits;
};

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        this->_value = other._value;
        this->_fractionalBits = other._fractionalBits;
        std::cout << "[ASSIGNMENT OPERATOR]" << std::endl;
    }
    else 
        std::cout << "[ASSIGNMENT OPERATOR NOT NEEDED]" << std::endl;
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

float Fixed::toFloat(void) const
{
    return ((float)_value / (1 << _fractionalBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return (os);
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_value++;
    return temp;
}

// Fixed Fixed::operator--(int)
// {
//     this->_value -= 1;
// }

Fixed Fixed::operator*(const Fixed &b)
{
    std::cout << "[Operator *]" << std::endl;
    Fixed result;

    result._value = (this->_value * b._value) >> 8;
    result._fractionalBits = 8;
    return (result);
}

Fixed Fixed::operator+(const Fixed &b)
{
    Fixed result;

    result._value = (this->_value + b._value) >> 8;
    result._fractionalBits = 8;
    return (result);
}

Fixed Fixed::operator-(const Fixed &b)
{
    Fixed result;

    result._value = (this->_value - b._value) >> 8;
    result._fractionalBits = 8;
    return (result);
}

Fixed Fixed::operator/(const Fixed &b)
{
    Fixed result;

    result._value = (this->_value / b._value) >> 8;
    result._fractionalBits = 8;
    return (result);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a._value > b._value)
        return (a);;
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a._value > b._value)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a._value > b._value)
        return (a);
    return (b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a._value > b._value)
        return (a);
    return (b);
}
