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
};

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    std::cout << "[DiamondTrap constructor]" << std::endl;

	ClapTrap::_name = (name + "_clap_name");
    name_ = name;
    _health = FragTrap::_health;
    _energy = 50;
    _attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy):ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy)
{
    std::cout << "[DiamondTrap copy constructor]" << std::endl;
    this->name_ = toCopy.name_;
    this->_health = toCopy._health;
    this->_energy = toCopy._energy;
    this->_attack = toCopy._attack;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        std::cout << "[DiamondTrap assignment operator]" << std::endl;
        *this = other;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap deconstructor]" << std::endl;
}

void    DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->name_ << std::endl;
	std::cout << "ClapTrap " << this->_name << std::endl;
}