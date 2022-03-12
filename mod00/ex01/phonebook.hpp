#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		void setFName(std::string &name);
		void setLName(std::string &name);
		void setNick(std::string &nick);
		void setPhone(std::string &phone);
		void setSecret(std::string &secret);

		std::string getFName (void);
		std::string getLName (void);
		std::string getNick (void);
		std::string getPhone (void);
		std::string getSecret (void);

		void	show_contact(void);
		void	new_printf(int field);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

class Phonebook
{
	public:
		Phonebook (void);
		~Phonebook (void);

		Contact book[8];

		void	add_book(int i);
		void	book_search(int num);
		void	printf_short_info(int i);



};

#endif