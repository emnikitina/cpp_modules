#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "str address: " << &str << std::endl;
	std::cout << "address PTR: " << stringPTR << std::endl;
	std::cout << "address REF: " << &stringREF << std::endl;
   	std::cout << "org str: " << str << std::endl;
	std::cout << "str PTR: " << *stringPTR << std::endl;
	std::cout << "str REF: " << stringREF << std::endl;
	return (0);
}
