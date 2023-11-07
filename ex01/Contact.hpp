#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_num;
		std::string dark_secret;

public:
		Contact(void);
		~Contact(void);
		void		set_contact(std::string input, int id);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		void		print_contact();

		//test
		void	show_contact();
};

#endif