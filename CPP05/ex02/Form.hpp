/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:18:56 by retr0             #+#    #+#             */
/*   Updated: 2026/04/17 18:52:23 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        const int           _gradeSign;
        const int           _gradeExec;
        bool                _signed;
    public:
        Form();
        Form(std::string name, int gradeSign, int gradeExec);
        Form(const Form &other);
        Form& operator=(const Form &other);
        ~Form();
        std::string getName() const;
        bool getSigned() const;
        int gradeSign() const;
        int gradeExec() const;
        void beSigned(const Bureaucrat &b);
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Grade too high!");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Grade too low!");
                }
        };
};

std::ostream& operator<<(std::ostream &os, const Form &f);

#endif