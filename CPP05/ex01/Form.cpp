/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:35:30 by retr0             #+#    #+#             */
/*   Updated: 2026/04/17 19:18:05 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _gradeSign(0), _gradeExec(0)
{
    std::cout << "[Form default constructor called]" << std::endl;
};

Form::Form(std::string name, int gradeSign, int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(0)
{
    std::cout << "[Form constructor called]" << std::endl;
    if (_gradeSign < 1 || _gradeExec < 1)
        throw (GradeTooHighException());
    if (_gradeSign > 150 || _gradeExec > 150)
        throw (GradeTooLowException());
};

Form::Form(const Form &other): _name(other._name), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{
    std::cout << "[Form copy constructor called]" << std::endl;
    *this = other;
};

Form& Form::operator=(const Form &other)
{
    std::cout << "[Assignment operator called]" << std::endl;
    if (this != &other)
    {
        _signed = other._signed;
    }
    return (*this);
};

Form::~Form()
{
    std::cout << "[Form default destructor called]" << std::endl;
};

std::string Form::getName() const
{
    return (_name);
};

bool Form::getSigned() const
{
    return (_signed);
};

int Form::gradeSign() const
{
    return (_gradeSign);
};

int Form::gradeExec() const
{
    return (_gradeExec);
};

void Form::beSigned(const Bureaucrat &b)
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

std::ostream& operator<<(std::ostream &os, const Form &f)
{
    os <<  "Form" << std::endl << "Name: " << f.getName() << std::endl << "Grade Signed: " << f.gradeSign() << std::endl << "Grade Exec: " << f.gradeExec() << std::endl << "Signed: " << f.getSigned();

    return (os);
};
