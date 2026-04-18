/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 20:17:54 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/18 21:57:59 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm()
{
	std::cout << "Shruberry default constructor called " << std::endl;
};

ShruberryCreationForm::ShruberryCreationForm(std::string target): _target(target)
{
	std::cout << "Shruberry constructor called" << std::endl;
};

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &other)
{
	std::cout << "Shruberry copy constructor called" << std::endl;
	*this = other;
};

ShruberryCreationForm& ShruberryCreationForm::operator=(const ShruberryCreationForm &other)
{
	std::cout << "Shruberry assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
};

ShruberryCreationForm::~ShruberryCreationForm()
{
	std::cout << "Shruberry destructor called" << std::endl;
};

void ShruberryCreationForm::execute(const Bureaucrat &executor)
{
	if (getSigned())
	{
		std::cout << "EXECUTING" << std::endl;
	}
};