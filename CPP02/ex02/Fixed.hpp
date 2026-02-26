/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-25 19:09:18 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-25 19:09:18 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int _value;
        int _fractionalBits;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed &toCopy);
        Fixed& operator=(const Fixed &other);
        Fixed operator*(const Fixed &b);
        Fixed operator+(const Fixed &b);
        Fixed operator-(const Fixed &b);
        Fixed operator/(const Fixed &b);
        Fixed operator++(int i);
        Fixed operator--(int i);
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        static const Fixed& max(const Fixed &a, const Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static Fixed& min(Fixed &a, Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

