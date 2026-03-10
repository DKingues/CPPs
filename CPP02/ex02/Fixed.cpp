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
    _value = 0;
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
    std::cout << "[Post increment]" << std::endl;
    Fixed temp;

    temp = *this;
    this->_value++;
    return (temp);
}

Fixed Fixed::operator--(int)
{
    std::cout << "[Post decrement]" << std::endl;
    Fixed temp;

    temp = *this;
    this->_value--;
    return (temp);
}

Fixed Fixed::operator++(void)
{
    std::cout << "[Pre increment]" << std::endl;
    this->_value++;
    return (*this);
}

Fixed Fixed::operator--(void)
{
    std::cout << "[Pre decrement]" << std::endl;
    this->_value--;
    return (*this);
}

Fixed Fixed::operator*(const Fixed &b) const
{
    std::cout << "[Operator *]" << std::endl;
    Fixed result;

    result._value = (this->_value * b._value) >> 8;
    return (result);
}

Fixed Fixed::operator+(const Fixed &b) const
{
    std::cout << "[Operator +]" << std::endl;
    Fixed result;

    result._value = this->_value + b._value;
    return (result);
}

Fixed Fixed::operator-(const Fixed &b) const
{
    std::cout << "[Operator -]" << std::endl;
    Fixed result;

    result._value = this->_value - b._value;
    return (result);
}

Fixed Fixed::operator/(const Fixed &b) const
{
    std::cout << "[Operator /]" << std::endl;
    Fixed result;

    result._value = (this->_value << 8) / b._value;
    return (result);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a._value > b._value)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a._value < b._value)
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
    if (a._value < b._value)
        return (a);
    return (b);
}

bool Fixed::operator<(const Fixed& obj) const
{
    return (this->_value < obj._value);
}

bool Fixed::operator>(const Fixed& obj) const
{
    return (this->_value > obj._value);
}

bool Fixed::operator<=(const Fixed& obj) const
{
    return (this->_value <= obj._value);
}

bool Fixed::operator>=(const Fixed& obj) const
{
    return (this->_value >= obj._value);
}

bool Fixed::operator==(const Fixed& obj) const
{
    return (this->_value == obj._value);
}

bool Fixed::operator!=(const Fixed& obj) const
{
    return (this->_value != obj._value);
}

