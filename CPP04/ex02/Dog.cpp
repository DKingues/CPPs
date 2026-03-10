/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:29:51 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 20:05:49 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	brain = new Brain();
	std::cout << "[Default Dog constructor]" << std::endl;
}

Dog::Dog(const Dog &toCopy):Animal(toCopy)
{
	*this = toCopy;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		std::cout << "[Assignment operator]" << std::endl;
		this->brain = other.brain;
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "[Dog Deconstructor]" << std::endl;
}