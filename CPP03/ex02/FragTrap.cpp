/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 21:34:06 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-27 21:34:06 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "[FragTrap Default constructor]" << std::endl;

    _name = "Default FragTrap";
    _health = 100;
    _energy = 100;
    _attack = 30;
};

FragTrap::FragTrap(std::string name)
{
    std::cout << "[FragTrap constructor]" << std::endl;

    _name = name;
    _health = 100;
    _energy = 100;
    _attack = 30;
}

FragTrap::FragTrap(const FragTrap &toCopy)
{
    std::cout << "[FragTrap copy constructor]" << std::endl;
    *this = toCopy;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        std::cout << "[FragTrap assignment operator]" << std::endl;
        this->_name = other._name;
        this->_health = other._health;
        this->_energy = other._energy;
        this->_attack = other._attack;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "[FragTrap Default destructor]" << std::endl;
}

// void FragTrap::attack(const std::string& target)
// {
//     if (this->_energy > 0 && this->_health > 0)
//     {
//         std::cout << "FragTrap " << this->getName();
//         std::cout << " attacks " << target;
//         std::cout << " causing " << this->getAttack();
//         std::cout << " points of damage. " << std::endl;
//         this->_energy -= 1;
//     }
// }

void FragTrap::highFivesGuys(void)
{
    std::cout << this->getName() << " gave everyone a high five." << std::endl;
}