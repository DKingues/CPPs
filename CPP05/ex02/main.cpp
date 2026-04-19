/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:55:02 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/19 14:23:44 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat D("Diego", 2);
		std::cout << D << std::endl;
		ShruberryCreationForm A("huehue");
		D.signForm(A);
		D.executeForm(A);
		Bureaucrat B("Alice", 1);
		RobotomyRequestForm R1("Robotomy 1");
		RobotomyRequestForm R2("Robotomy 2");
		RobotomyRequestForm R3("Robotomy 3");
		B.signForm(R1);
		B.signForm(R2);
		B.executeForm(R1);
		B.executeForm(R2);
		B.executeForm(R3);
		PresidentialPardonForm P1("Pardon 1");
		PresidentialPardonForm P2("Pardon 2");
		Bureaucrat P("President", 1);
		B.signForm(P1);
		B.signForm(P2);
		P.executeForm(P1);
		P.executeForm(P2);
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (AForm::GradeTooHighException& e)
	{
		std::cout << "Form " << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << "Form " << e.what() << std::endl;
	}
};