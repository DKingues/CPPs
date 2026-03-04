/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 20:28:15 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 16:37:15 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "[ScavTrap Default constructor]" << std::endl;
};

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "[ScavTrap constructor]" << std::endl;

    _name = name;
    _health = 100;
    _energy = 50;
    _attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy):ClapTrap(toCopy)
{
    std::cout << "[ScavTrap copy constructor]" << std::endl;
    this->_name = toCopy._name;
    this->_health = toCopy._health;
    this->_energy = toCopy._energy;
    this->_attack = toCopy._attack;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        std::cout << "[ScavTrap assignment operator]" << std::endl;
        *this = other;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap destructor]" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->getName();
    std::cout << " attacks " << target;
    std::cout << " causing " << this->getAttack();
    std::cout << " points of damage. " << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}

