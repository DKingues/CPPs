/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:29:51 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 20:05:56 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	brain = new Brain();
	std::cout << "[Default Cat constructor]" << std::endl;
}

Cat::Cat(const Cat &toCopy):Animal(toCopy)
{
	*this = toCopy;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		std::cout << "[Assignment operator]" << std::endl;
		this->brain = other.brain;
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "[Cat Deconstructor]" << std::endl;
}