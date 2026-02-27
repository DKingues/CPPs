/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 21:57:09 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-27 21:57:09 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "[DiamondTrap Default constructor]" << std::endl;
};

// DiamondTrap::DiamondTrap(std::string name)
// {
//     std::cout << "[DiamondTrap constructor]" << std::endl;

//     _name = name;
//     _health = 100;
//     _energy = 100;
//     _attack = 30;
// }

// DiamondTrap::DiamondTrap(const DiamondTrap &toCopy)
// {
//     std::cout << "[DiamondTrap copy constructor]" << std::endl;
//     this->_name = toCopy._name;
//     this->_health = toCopy._health;
//     this->_energy = toCopy._energy;
//     this->_attack = toCopy._attack;
// }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        std::cout << "[DiamondTrap assignment operator]" << std::endl;
        *this = other;
    }
    return (*this);
}

// void    DiamondTrap::