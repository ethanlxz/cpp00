#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
	
}


std::string Contact::trimtab(std::string input) 
{
    std::string result;
	int i = -1;

    while (input[++i]) 
	{
        if (input[i] == '\t') 
            result += std::string(4, ' ');
        else 
            result += input[i];
    }

    return result;
}

void	Contact::set_contact(std::string input, int id)
{
	if (id == 1)
		this->first_name = trimtab(input);
	else if (id == 2)
		this->last_name = trimtab(input);
	else if (id == 3)
		this->nickname = trimtab(input);
	else if (id == 4)
		this->phone_num = trimtab(input);
	else if (id == 5)
		this->dark_secret = trimtab(input);
}



std::string Contact::get_first_name()
{
	return (this->first_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

void Contact::print_contact()
{
	if (!this->first_name.empty())
	{
		std::cout << "\033[0;34mFirst Name : " << this->first_name << std::endl;
		std::cout << "Last Name : " << this->last_name << std::endl;
		std::cout << "Nickname : " << this->nickname << std::endl;
		std::cout << "Phone Number : " << this->phone_num << std::endl;
		std::cout << "Darkest Secret : " << this->dark_secret << std::endl;
	}
	else
	{
		std::cout << "\033[0;34mContact is empty !" << std::endl;
	}
}
