/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:29:51 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 19:22:31 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "[Default Cat constructor]" << std::endl;
}
Cat::Cat(const Cat &toCopy):Animal(toCopy)
{
	this->_type = toCopy._type;
}
Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		std::cout << "[Assignment operator]" << std::endl;
		*this = other;
	}
	return (*this);
}
Cat::~Cat()
{
	std::cout << "[Cat Deconstructor]" << std::endl;
}