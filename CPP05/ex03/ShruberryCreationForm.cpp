/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 20:17:54 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/19 14:23:02 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(): AForm("Shruberry creation form", 145, 137)
{
	std::cout << "[Shruberry default constructor called]" << std::endl;
};

ShruberryCreationForm::ShruberryCreationForm(std::string target): AForm("Shruberry creation form", 145, 137), _target(target)
{
	std::cout << "[Shruberry constructor called]" << std::endl;

};

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &other): AForm("Shruberry creation form", 145, 137)
{
	std::cout << "[Shruberry copy constructor called]" << std::endl;
	*this = other;
};

ShruberryCreationForm& ShruberryCreationForm::operator=(const ShruberryCreationForm &other)
{
	std::cout << "[Shruberry assignment operator called]" << std::endl;
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
};

ShruberryCreationForm::~ShruberryCreationForm()
{
	std::cout << "[Shruberry destructor called]" << std::endl;
};

void ShruberryCreationForm::executeForm() const
{
	std::string file_name = _target + ".txt"; 
	std::ofstream file(file_name.c_str());
	
	if(file.is_open())
	{
		file << "                 *" << std::endl;
		file << "                ***" << std::endl;
		file << "               *****" << std::endl;
		file << "              *******" << std::endl;
		file << "             *********" << std::endl;
		file << "            ***********" << std::endl;
		file << "           *************" << std::endl;
		file << "          ***************" << std::endl;
		file << "         *****************" << std::endl;
		file << "        *******************" << std::endl;
		file << "       *********************" << std::endl;
		file << "      ***********************" << std::endl;
		file << "     *************************" << std::endl;
		file << "    ***************************" << std::endl;
		file << "   *****************************" << std::endl;
		file << "  *******************************" << std::endl;
		file << " *********************************" << std::endl;
		file << "***********************************" << std::endl;
		file << "			   |||||" << std::endl;
		file << "			   |||||" << std::endl;
		file << "			   |||||" << std::endl;
		file << "			   |||||" << std::endl;
		file << "         ~~~~~~~~~~~~~~~~~" << std::endl;
		file.close();
	}
};