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

ClapTrap::ClapTrap()
{
    std::cout << "[Default constructor]" << std::endl;
};

ClapTrap::ClapTrap(std::string name):_name(name),_health(10),_energy(10),_attack(0)
{
    std::cout << "[Constructor]" << std::endl;
};

ClapTrap::~ClapTrap()
{
    std::cout << "[Deconstructor]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
    std::cout << "[Copy constructor]" << std::endl;
    this->_attack = toCopy._attack;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        std::cout << "[Assignment operator]" << std::endl;
        *this = other;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->getName();
    std::cout << " attacks " << target;
    std::cout << " causing " << this->getAttack();
    std::cout << " points of damage. " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap" << this->getName();
    std::cout << "took" << amount;
    std::cout << "damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap" << this->getName();
    std::cout << "recovered" << amount;
    std::cout << "HP." << std::endl;
}

std::string ClapTrap::getName(void)
{
    return (_name);
}

int ClapTrap::getHealth(void)
{
    return (_health);    
}

int ClapTrap::getEnergy(void)
{
    return (_energy);
}

int ClapTrap::getAttack(void)
{
    return (_attack);
}
