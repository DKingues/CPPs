/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-24 20:11:15 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-24 20:11:15 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;        // Default constructor
    Fixed b(a);     // Copy constructor
    Fixed c;        // Default constructor

    c = b;          // Assignment operator

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}

/*
    a created with 0 raw bits.
    b created and copied rawBits from a.
    c created with 0 raw bits

    c uses assignment operator to get the value of rawBits from b;
*/