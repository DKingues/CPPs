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
    this->_name = toCopy._name;
    this->_health = toCopy._health;
    this->_energy = toCopy._energy;
    this->_attack = toCopy._attack;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        std::cout << "[FragTrap assignment operator]" << std::endl;
        *this = other;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "[FragTrap Default destructor]" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->getName();
    std::cout << " attacks " << target;
    std::cout << " causing " << this->getAttack();
    std::cout << " points of damage. " << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->getName() << " gave everyone a high five." << std::endl;
}