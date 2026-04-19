/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 20:21:20 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/19 14:22:38 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy request form", 72, 45)
{
	std::cout << "[Robotomy default constructor called]" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy request form", 72, 45), _target(target)
{
	std::cout << "[Robotomy constructor called]" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm("Robotomy request form", 72, 45)
{
	std::cout << "[Robotomy copy constructor called]" << std::endl;
	*this = other;
};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "[Robotomy assignment operator called]" << std::endl;
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[Robotomy destructor called]" << std::endl;
};

void RobotomyRequestForm::executeForm() const
{
	std::cout << "* DRILLING NOISES *" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << "Robotomy failed, whoopsy... I guess " << _target << " is dead." << std::endl;
	else
		std::cout << _target << "Robotomy successfull, first time for everything!" << std::endl;
};