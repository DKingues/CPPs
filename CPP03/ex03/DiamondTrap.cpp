/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 21:57:09 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 17:17:07 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "[DiamondTrap Default constructor]" << std::endl;

    _name = "Default";
    ClapTrap::_name = _name + "_clap_name";
    _health = FragTrap::_health;
    _energy = 50;
    _attack = FragTrap::_attack;
};

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    std::cout << "[DiamondTrap constructor]" << std::endl;

	ClapTrap::_name = (name + "_clap_name");
    _name = name;
    _health = FragTrap::_health;
    _energy = 50;
    _attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy):ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy)
{
    std::cout << "[DiamondTrap copy constructor]" << std::endl;
    *this = toCopy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        std::cout << "[DiamondTrap assignment operator]" << std::endl;
        this->_name = other._name;
        this->_health = other._health;
        this->_energy = other._energy;
        this->_attack = other._attack;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap Deconstructor]" << std::endl;
}

void    DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->_name << std::endl;
	std::cout << "ClapTrap " << ClapTrap::_name << std::endl;
}