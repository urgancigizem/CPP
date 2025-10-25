#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &str;
	
	std::string &stringREF = str;

	std::cout << "String'in bellek adresi:    " << &str << std::endl;
	std::cout << "stringPTR'nin tuttuğu adres: " << stringPTR << std::endl;
	std::cout << "stringREF'nin tuttuğu adres: " << &stringREF << std::endl;
	
	std::cout << std::endl;

	std::cout << "String'in değeri:              " << str << std::endl;
	std::cout << "stringPTR'nin gösterdiği değer: " << *stringPTR << std::endl;
	std::cout << "stringREF'nin gösterdiği değer: " << stringREF << std::endl;

	return 0;
}