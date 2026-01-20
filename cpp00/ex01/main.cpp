#include "PhoneBook.hpp"


int main() 
{
    PhoneBook phoneBook;
    std::string line;
    
    std::cout << "Welcome to PhoneBook!" << std::endl;

    while (1) 
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> line;
        
        if (line == "ADD")
            phoneBook.add();
        else if (line == "SEARCH")
            phoneBook.search();
        else if (line == "EXIT")
        {
            
            break;
        }
        else
            std::cout << "Invalid command! Use: ADD, SEARCH, EXIT" << std::endl;
    }
    
    return 0;
}