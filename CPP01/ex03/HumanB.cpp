/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 21:24:58 by dicosta-          #+#    #+#             */
/*   Updated: 2026/02/03 15:47:41 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name):_weapon(NULL)
{
	_name = name;
}

HumanB::~HumanB(){};

void	HumanB::attack()
{
	if (_weapon == NULL)
	{
		std::cout << _name << " came to a fight unpreparred." << std::endl;
		return  ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}