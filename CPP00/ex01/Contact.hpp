#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact
{
	public:
		Contact();
		~Contact();
		void		setInfo();
		void		getInfo();
		std::string validPhoneNumber();
		void 		validStringInput(std::string name, std::string &var);
		std::string get_fN();
		std::string get_lN();
		std::string get_nN();

	private:
		std::string firstName;
		std::string lastName;
		std::string	nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

