#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cctype>

class Phonebook
{
	private:
			Contact contacts[8];
			int	update_index;
	public:
			Phonebook(void);
			~Phonebook(void);
			void add_contact();
			void truncate(std::string str);
			void search_contact();
			int  check_blank(std::string str);
};

#endif