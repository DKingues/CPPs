/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:55:02 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/18 22:29:40 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat D("Diego", 100);
		std::cout << D << std::endl;
		AForm A("Form 1022", 160, 10);
		std::cout << A << std::endl;
		D.signForm(A);
		std::cout << A << std::endl;
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