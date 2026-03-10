/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-24 20:11:20 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-24 20:11:20 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Fixed
{
    private:
        int     RawBits;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &toCopy);
        Fixed& operator=(const Fixed &other);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const Raw);
};
