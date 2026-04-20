#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "[Intern default constructor called]" << std::endl;
};
Intern::Intern(const Intern &other)
{
	std::cout << "[Intern copy constructor called]" << std::endl;
	*this = other;
};
Intern& Intern::operator=(const Intern &other)
{
	std::cout << "[Intern assignment operator called]" << std::endl;
	if (this != &other)
		return (*this);
	return (*this);
};

Intern::~Intern()
{
	std::cout << "[Intern default destructor called]" << std::endl;
};

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string validFormName[3] = {"shruberry creation", "robotomy request", "presidential pardon"};
	int i = 0;
	AForm *form = NULL;
	for (; formName != validFormName[i]; i++)
		;
	switch (i)
	{
	case 0:
		form = new ShruberryCreationForm(formTarget);
		break;
	case 1:
		form = new RobotomyRequestForm(formTarget);
		break;
	case 2:
		form = new PresidentialPardonForm(formTarget);
		break;
	default:
		std::cout << "Invalid form name." << std::endl;
		return (form);
	}
	std::cout << "Intern creates " << formName << "." << std::endl;
	return (form);
};