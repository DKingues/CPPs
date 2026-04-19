/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:35:30 by retr0             #+#    #+#             */
/*   Updated: 2026/04/19 12:27:21 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _gradeSign(0), _gradeExec(0)
{
    std::cout << "[Form default constructor called]" << std::endl;
};

AForm::AForm(std::string name, int gradeSign, int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(0)
{
    std::cout << "[Form constructor called]" << std::endl;
    if (_gradeSign < 1 || _gradeExec < 1)
        throw (GradeTooHighException());
    if (_gradeSign > 150 || _gradeExec > 150)
        throw (GradeTooLowException());
};

AForm::AForm(const AForm &other): _name(other._name), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{
    std::cout << "[Form copy constructor called]" << std::endl;
    *this = other;
};

AForm& AForm::operator=(const AForm &other)
{
    std::cout << "[Assignment operator called]" << std::endl;
    if (this != &other)
    {
        _signed = other._signed;
    }
    return (*this);
};

AForm::~AForm()
{
    std::cout << "[Form default destructor called]" << std::endl;
};

std::string AForm::getName() const
{
    return (_name);
};

bool AForm::getSigned() const
{
    return (_signed);
};

int AForm::gradeSign() const
{
    return (_gradeSign);
};

int AForm::gradeExec() const
{
    return (_gradeExec);
};

void AForm::beSigned(const Bureaucrat &b)
{
    try
    {
        if (b.getGrade() > this->gradeSign())
            throw (GradeTooLowException());
        _signed = 1;
        std::cout << b.getName() << " signed " << getName() << std::endl;
    }
    catch(GradeTooLowException& e)
    {
        std::cout << b.getName() << " couldn't sign " << this->getName() << " because " << e.what() << std::endl;
    }
};

void AForm::execute(const Bureaucrat &executor) const
{
	if(!_signed) 
		throw(AForm::NotSignedException());
	if (executor.getGrade() > _gradeExec)
		throw(GradeTooLowException());
	executeForm();
}

std::ostream& operator<<(std::ostream &os, const AForm &f)
{
    os <<  "Form" << std::endl << "Name: " << f.getName() << std::endl << "Grade Signed: " << f.gradeSign() << std::endl << "Grade Exec: " << f.gradeExec() << std::endl << "Signed: " << f.getSigned();

    return (os);
};
