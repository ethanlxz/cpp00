#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	std::string str;
	Phonebook phonebook;

	std::cout << "\033[0;31m";
	std::cout << "Welcome To The Phonebook!\n" << std::endl;
	while (1)
	{
		std::cout << "\033[0;32m";
		std::cout << "Enter ADD to add contacts.\n" << std::endl;
		std::cout << "Enter SEARCH to search contacts.\n" << std::endl;
		std::cout << "Enter EXIT to exit program.\n" << std::endl;

		std::getline(std::cin, str);
		if (str == "SEARCH" || str == "search")
			phonebook.search_contact();
		else if (str == "ADD" || str == "add")
			phonebook.add_contact();
		else if (str == "EXIT" || str == "exit")
		{
			std::cout << "\033[0;31mExited the program.\033[0m" << std::endl;
			exit(EXIT_SUCCESS);
		}
		else
			std::cout << "\033[0;31mUnknown Command !\033[0m" << std::endl;
	}
	return 0;
}
