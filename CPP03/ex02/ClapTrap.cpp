/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 19:04:48 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-27 19:04:48 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Default"),_health(10),_energy(10),_attack(0)
{
    std::cout << "[ClapTrap Default constructor]" << std::endl;
};

ClapTrap::ClapTrap(std::string name):_name(name),_health(10),_energy(10),_attack(0)
{
    std::cout << "[ClapTrap Constructor]" << std::endl;
};

ClapTrap::~ClapTrap()
{
    std::cout << "[ClapTrap Deconstructor]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
    std::cout << "[ClapTrap Copy constructor]" << std::endl;
    *this = toCopy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        std::cout << "[ClaptTrap Assignment operator]" << std::endl;
        this->_name = other._name;
        this->_health = other._health;
        this->_energy = other._energy;
        this->_attack = other._attack;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy > 0 && this->_health > 0)
    {
        std::cout << "ClapTrap " << this->getName();
        std::cout << " attacks " << target;
        std::cout << " consuming 1 energy and ";
        std::cout << " causing " << this->getAttack();
        std::cout << " points of damage. " << std::endl;
        this->_energy -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->getName();
    std::cout << " took " << amount;
    std::cout << " damage." << std::endl;
    this->_health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy > 0 && this->_health > 0)
    {
        std::cout << "ClapTrap " << this->getName();
        std::cout << " recovered " << amount;
        std::cout << " HP." << std::endl;
        this->_health += amount;
        this->_energy -= 1;
    }
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}

int ClapTrap::getHealth(void) const
{
    return (_health);
}

int ClapTrap::getEnergy(void) const
{
    return (_energy);
}

int ClapTrap::getAttack(void) const
{
    return (_attack);
}