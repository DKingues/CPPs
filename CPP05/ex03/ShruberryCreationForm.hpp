/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 20:18:13 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/19 12:39:01 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_HPP
#define SHRUBERRY_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class ShruberryCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShruberryCreationForm();
		ShruberryCreationForm(std::string target);
		ShruberryCreationForm(const ShruberryCreationForm &other);
		ShruberryCreationForm& operator=(const ShruberryCreationForm &other);
		~ShruberryCreationForm();
		void executeForm() const;
};

#endif