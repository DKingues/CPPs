#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void		getIndex(void);
		std::string	validIndex(void);
		void		add(void);
		void		search(void);
		void		printInfo(int i);
		
	private:
		Contact contacts[8];
		int index;
		int	numberOfContacts;
};

