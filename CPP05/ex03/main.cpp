/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:55:02 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/20 17:19:41 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat D("Luffy", 1);
		Intern Z;
		AForm *Batmobile;
		Batmobile = Z.makeForm("robotomy request", "filefilenomi");

		Batmobile->beSigned(D);
		Batmobile->execute(D);
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