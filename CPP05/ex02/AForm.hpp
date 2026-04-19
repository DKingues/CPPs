/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:18:56 by retr0             #+#    #+#             */
/*   Updated: 2026/04/19 12:29:11 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        const int           _gradeSign;
        const int           _gradeExec;
        bool                _signed;
    public:
        AForm();
        AForm(std::string name, int gradeSign, int gradeExec);
        AForm(const AForm &other);
        AForm& operator=(const AForm &other);
        virtual ~AForm() = 0;
        std::string getName() const;
        bool getSigned() const;
        int gradeSign() const;
        int gradeExec() const;
        void beSigned(const Bureaucrat &b);
		void execute(const Bureaucrat &executor) const;
		virtual void executeForm() const = 0;
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
		class NotSignedException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("This form is not signed!");
                }
        };
};

std::ostream& operator<<(std::ostream &os, const AForm &f);

#endif