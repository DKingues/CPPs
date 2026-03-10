/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-25 19:08:53 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-25 19:08:53 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
    Fixed const c(1222);
    Fixed d(2);

    if (b <= c)
        std::cout << "B smaller or equal\n";
    if (c > b)
        std::cout << "C BIGGER\n";
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << (c == b) << std::endl;
    std::cout << Fixed::min( c, b ) << std::endl;
    return (0);
}
