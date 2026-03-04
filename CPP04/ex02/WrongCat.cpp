/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:10:42 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 19:10:54 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "Wrong Cat";
	std::cout << "[Default WrongCat constructor]" << std::endl;
}
WrongCat::WrongCat(const WrongCat &toCopy) : WrongAnimal(toCopy)
{
	this->_type = toCopy._type;
}
WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		std::cout << "[Assignment operator]" << std::endl;
		*this = other;
	}
	return (*this);
}
WrongCat::~WrongCat()
{
	std::cout << "[Wrong Cat Deconstructor]" << std::endl;
}
