/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 20:28:15 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-27 20:28:15 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "[ScavTrap Default constructor]" << std::endl;
    
    _name = "Default ScavTrap";
    _health = 100;
    _energy = 50;
    _attack = 20;
};

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "[ScavTrap constructor]" << std::endl;

    _name = name;
    _health = 100;
    _energy = 50;
    _attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy)
{
    std::cout << "[ScavTrap copy constructor]" << std::endl;

    *this = toCopy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        std::cout << "[ScavTrap assignment operator]" << std::endl;

        this->_name = other._name;
        this->_health = other._health;
        this->_energy = other._energy;
        this->_attack = other._attack;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap Default destructor]" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy > 0 && this->_health > 0)
    {
        std::cout << "ScavTrap " << this->getName();
        std::cout << " attacks " << target;
        std::cout << " consuming 1 energy and ";
        std::cout << " causing " << this->getAttack();
        std::cout << " points of damage. " << std::endl;
        this->_energy -= 1;
    }
}

void    ScavTrap::guardGate(void)
{
    std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}

