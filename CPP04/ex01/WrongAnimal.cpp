/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:10:42 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 19:22:40 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Wrong Animal";
	std::cout << "[Default WrongAnimal constructor]" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &toCopy)
{
	this->_type = toCopy._type;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		std::cout << "[Assignment operator]" << std::endl;
		*this = other;
	}
	return (*this);
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "[Wrong Animal Deconstructor]" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Beow Mark Baow Meark" << std::endl;
}