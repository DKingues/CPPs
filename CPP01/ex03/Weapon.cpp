/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 21:24:51 by dicosta-          #+#    #+#             */
/*   Updated: 2026/01/28 02:19:40 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string weapon)
{
	_type = weapon;
};

Weapon::~Weapon(){};

const std::string& Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string newType)
{
	_type = newType;
}