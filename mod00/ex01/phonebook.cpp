#include "phonebook.hpp"

Contact::Contact(void) {};

Contact::~Contact(void) {};

void Contact::setFName(std::string &name)
{
    this->first_name = name;
};

void Contact::setLName(std::string &name)
{
    this->last_name = name;
};

void Contact::setNick(std::string &nick)
{
    this->nickname = nick;
};

void Contact::setPhone(std::string &phone)
{
    this->phone_number = phone;
};

void Contact::setSecret(std::string &secret)
{
    this->darkest_secret = secret;
};


std::string Contact::getFName (void)
{
    return (this->first_name);
};

std::string Contact::getLName (void)
{
    return (this->last_name);
};

std::string Contact::getNick (void)
{
    return (this->nickname);
};

std::string Contact::getPhone (void)
{
    return (this->phone_number);
};

std::string Contact::getSecret (void)
{
    return (this->darkest_secret);
};

void	Contact::show_contact(void)
{
    std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
};

void	Contact::new_printf(int field)
{
    std::string str;
	int			size;

    if (field == 1)
        str = this->first_name;
	else if (field == 2)
        str = this->last_name;
    else if (field == 3)
        str = this->nickname;
    size = str.size();
	if (size > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		std::cout << str;
		while (++size < 11)
			std::cout << " ";
	}
}

Phonebook::Phonebook (void) {};

Phonebook::~Phonebook (void) {};

void	Phonebook::add_book(int i)
{
    std::string tmp;

	std::cout << "input first name:\n";
	std::getline(std::cin, tmp);
	book[i].setFName(tmp);
	std::cout << "input last name:" << std::endl;
	std::getline(std::cin, tmp);
	book[i].setLName(tmp);
	std::cout << "input nickname:" << std::endl;
	std::getline(std::cin, tmp);
	book[i].setNick(tmp);
	std::cout << "input phone number:" << std::endl;
	std::getline(std::cin, tmp);
	book[i].setPhone(tmp);
	std::cout << "input darkest secret:" << std::endl;
	std::getline(std::cin, tmp);
	book[i].setSecret(tmp);
	std::cout << "The contact has been added to the phonebook\n";
};

void	Phonebook::printf_short_info(int i)
{
    std::cout << i + 1 << "          |";
    book[i].new_printf(1);
	std::cout << "|";
    book[i].new_printf(2);
	std::cout << "|";
    book[i].new_printf(3);
	std::cout << std::endl;
}

void	Phonebook::book_search(int num)
{
    int	i = -1;
	int	index;

	if (num > 8)
		num = 8;
	std::cout << "index      |first name|last name |nickname  \n";
	while (++i < num)
        printf_short_info(i);
	std::cout << "index: ";
	std::cin >> index;
	if (std::cin.fail())
    {
	    std::cout << "Wrong format\n";
        std::cin.clear();
        std::cin.ignore();
    }
    else
    {
    	if (index > num || index < 1)
	    	std::cout << "No contact with this index" << std::endl;
    	else
	    	book[index - 1].show_contact();
    }
    std::cin.ignore();
};