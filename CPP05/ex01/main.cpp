/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:55:02 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/17 19:29:09 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat D("Diego", 100);
		std::cout << D << std::endl;
		Form A("Form 1022", 160, 10);
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
	catch (Form::GradeTooHighException& e)
	{
		std::cout << "Form " << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << "Form " << e.what() << std::endl;
	}
};