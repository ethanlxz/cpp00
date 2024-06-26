#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
	this->update_index = 0;
}

Phonebook::~Phonebook()
{

}

int	Phonebook::check_blank(std::string str)
{
	int i = 0;

	while (isblank(str[i]))
		i++;
	if (str[i])
		return 0;
	return 1;
}

void	Phonebook::add_contact()
{
	std::string input[5];
	int i;
 	
	std::cout << "\033[0;34mEnter First Name :" << std::endl;
	std::getline(std::cin, input[0]);
	std::cout << "Enter Last Name :" << std::endl;
	std::getline(std::cin, input[1]);
	std::cout << "Enter Nickname :" << std::endl;
	std::getline(std::cin, input[2]);
	std::cout << "Enter Phone Number :" << std::endl;
	std::getline(std::cin, input[3]);
	std::cout << "Enter Your Darkest Secret :" << std::endl;
	std::getline(std::cin, input[4]);
	for (i = 0; i < 5; i++)
		if (input[i].empty() || check_blank(input[i]))
		{
		 	std::cout << "\033[0;31mEmpty field detected !" << std::endl;
			return ;
		}
	for (i = 0; i < 5; i++)
		this->contacts[update_index % 8].set_contact(input[i], i + 1);
	this->update_index++;
}

void	Phonebook::truncate(std::string str)
{
	std::string res;
	int i = 0;

	if (str == "")
		std::cout << std::setw(11);
	while (isblank(str[i]))
		i++;
	res = str.substr(i, str.length() - i);
	if (res.length() > 10)
		std::cout << std::setw(9) << res.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << res.substr(0,10);
	std::cout << "|";
}

void	Phonebook::search_contact()
{	
	std::cout << "\033[1;33m|---------" << "|----------" << "|----------" << "|----------|\n";
	std::cout << "|  Index  " << "|First name" << "|Last name " << "| Nickname |\n";
	std::cout << "|---------" << "|----------" << "|----------" << "|----------|\n";

	for (int i = 0; i < 8; i++)
	{
		std::cout << "| " << std::setw(5) << i+1 << std::setw(4) << "|";
		truncate(this->contacts[i].get_first_name());
		truncate(this->contacts[i].get_last_name());
		truncate(this->contacts[i].get_nickname());
		std::cout << "\n";
	}
	std::cout << "|---------" << "|----------" << "|----------" << "|----------|\n\n\033[1;0m";
	while (1)
	{
		std::string input;
		int 		num;

		std::cout << "\033[0;32mType 1-8 for see the contacts or EXIT to exit: \033[0;0m";
		std::getline(std::cin, input);


		if (input >= "1" && input <= "8")
		{
			num = std::stoi(input) -1;
			this->contacts[num % 8].print_contact();
			return ;
		}
		else if (input == "EXIT" || input == "exit")
			return ;
		else
		{
			std::cout << "\033[0;31mUnknown Command !" << std::endl;
			std::cout << "Please type 1 - 7 to search or EXIT to exit \033[0m" << std::endl;
		}
	}
}