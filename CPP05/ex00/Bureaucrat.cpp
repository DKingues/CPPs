/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:55:47 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/16 21:45:31 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "[Bureaucrat default constructor called]" << std::endl;
};

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "[Bureaucrat constructor called]" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
};

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy): _name(toCopy._name)
{
	std::cout << "[Bureaucrat copy constructor called]" << std::endl;
	*this = toCopy;
};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->_grade = other._grade;
		std::cout << "[Bureaucrat assignment operator called]" << std::endl;
	}
	return (*this);
};

Bureaucrat::~Bureaucrat()
{
	std::cout << "[Bureaucrat default destructor called]" << std::endl;
};

std::string Bureaucrat::getName() const
{
	return (_name);
};

int Bureaucrat::getGrade() const
{
	return (_grade);
};

void Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade - 1 < 0)
			throw IncrementTooHighException();
		_grade--;	
	}
	catch (IncrementTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
};

void Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade + 1 > 150)
			throw DecrementTooLowException();
		_grade++;
	}
	catch (DecrementTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
