#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
	this->update_index = 0;
}

Phonebook::~Phonebook()
{

}

void	Phonebook::add_contact()
{
	std::string input;

	this->update_index++;
	std::cout << "\033[0;34mEnter First Name :" << std::endl;
	std::getline(std::cin, input);
	this->contacts[update_index % 8].set_contact(input, 1);
	std::cout << "Enter Last Name :" << std::endl;
	std::getline(std::cin, input);
	this->contacts[update_index % 8].set_contact(input, 2);
	std::cout << "Enter Nickname :" << std::endl;
	std::getline(std::cin, input);
	this->contacts[update_index % 8].set_contact(input, 3);
	std::cout << "Enter Phone Number :" << std::endl;
	std::getline(std::cin, input);
	this->contacts[update_index % 8].set_contact(input, 4);
	std::cout << "Enter Your Darkest Secret :" << std::endl;
	std::getline(std::cin, input);
	this->contacts[update_index % 8].set_contact(input, 5);

	std::cout << "Input Done, index is =" << update_index << std::endl;
	this->contacts[update_index % 8].print_contact();
}

void	Phonebook::search_contact()
{
	
}