/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:22:18 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 19:22:27 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "[Default Animal constructor]" << std::endl;
}
Animal::Animal(const Animal &toCopy)
{
	this->_type = toCopy._type;
}
Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		std::cout << "[Assignment operator]" << std::endl;
		*this = other;
	}
	return (*this);
}
Animal::~Animal()
{
	std::cout << "[Animal Deconstructor]" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	if (this->_type == "Dog")
		std::cout << "Bark Bark" << std::endl;
	else if (this->_type == "Cat")
		std::cout << "Meow Meow" << std::endl;
}