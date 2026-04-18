/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 20:21:20 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/18 21:55:29 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "Robotomy default constructor called " << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target)
{
	std::cout << "Robotomy constructor called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	std::cout << "Robotomy copy constructor called" << std::endl;
	*this = other;
};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "Robotomy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
};

void RobotomyRequestForm::execute(const Bureaucrat &excutor)
{
	std::cout << "EXECUTING" << std::endl;
};