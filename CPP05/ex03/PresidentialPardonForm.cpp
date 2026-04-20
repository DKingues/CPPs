/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 20:22:30 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/19 14:22:12 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential pardon form", 25, 5)
{
	std::cout << "[Presidential default constructor called]" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential pardon form", 25, 5), _target(target)
{
	std::cout << "[Presidential constructor called]" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm("Presidential pardon form", 25, 5)
{
	std::cout << "[Presidential copy constructor called]" << std::endl;
	*this = other;
};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "[Presidential assignment operator called]" << std::endl;
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "[Presidential destructor called]" << std::endl;
};

void PresidentialPardonForm::executeForm() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebox" << std::endl;
};