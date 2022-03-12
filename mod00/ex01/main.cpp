#include "phonebook.hpp"

int main()
{
	std::string str;
	Phonebook book;
	int	i = 0;

	while (1)
	{
		std::cout << "input command: ADD, SEARCH or EXIT\n";
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			book.add_book(i % 8);
			i++;
		}
		else if (str == "SEARCH")
			book.book_search(i);
		else if (str == "EXIT")
			break ;
		else
			std::cout << "No such command\n";
	}
	return (0);
}