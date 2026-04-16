/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:56:07 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/16 21:41:31 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	_name;
		int 				_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &toCopy);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		class GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade too high!");	
				};
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade too low!");	
				};
		};
		class IncrementTooHighException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Increment will make the grade too high!");	
				};
		};
		class DecrementTooLowException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Decrement will make the grade too low!");	
				};
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &b);

#endif
