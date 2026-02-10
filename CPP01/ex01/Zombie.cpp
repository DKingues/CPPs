/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:57:09 by dicosta-          #+#    #+#             */
/*   Updated: 2026/01/27 18:39:02 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "default";
	std::cout << "Zombie " << name << " was born." << std::endl;
}

Zombie::Zombie(std::string nome)
{
	name = nome;
	std::cout << "Zombie " << name << " was born." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " got shot by an AK-47." << std::endl;
}
void Zombie::announce(void)
{
	std::cout << name;
	std::cout << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}