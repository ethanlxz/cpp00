#include <iostream>
#include <cstring>

int main()
{
	std::string str;

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
			std::cout << "Search" << std::endl;
		else if (str == "ADD" || str == "add")
			std::cout << "ADD" << std::endl;
		else if (str == "EXIT" || str == "exit")
		{
			std::cout << "Exited the program." << std::endl;
			exit(EXIT_SUCCESS);
		}
		else
			std::cout << "Unknown Command !" << std::endl;
		

	}
	return 0;
}
