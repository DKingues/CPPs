/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:55:02 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/16 21:44:04 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Andre", 12);
		std::cout << A << std::endl;
		Bureaucrat B("Bitoque", 1);
		B.decrementGrade();
		std::cout << B << std::endl;
		Bureaucrat C("Carlos", 29);
		std::cout << C << std::endl;
		Bureaucrat D("Diego", 150);
		std::cout << D << std::endl;
		D.decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
};