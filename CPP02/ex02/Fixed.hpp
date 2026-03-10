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
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &toCopy);
        Fixed& operator=(const Fixed &other);
        ~Fixed();

        Fixed(const int i);
        Fixed(const float f);
        
        int toInt( void ) const;
        float toFloat( void ) const;

        Fixed operator*(const Fixed &b) const;
        Fixed operator+(const Fixed &b) const;
        Fixed operator-(const Fixed &b) const;
        Fixed operator/(const Fixed &b) const;

        Fixed operator++(int); // postfix
        Fixed operator--(int);
        Fixed operator++(void); // prefix
        Fixed operator--(void);

        bool operator<(const Fixed& obj) const;
        bool operator>(const Fixed& obj) const;
        bool operator<=(const Fixed& obj) const;
        bool operator>=(const Fixed& obj) const;
        bool operator==(const Fixed& obj) const;
        bool operator!=(const Fixed& obj) const;

        static const Fixed& max(const Fixed &a, const Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static Fixed& min(Fixed &a, Fixed &b);

};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

