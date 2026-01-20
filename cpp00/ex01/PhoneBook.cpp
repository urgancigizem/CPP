#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
    _contactCount = 0;
    _oldestContactIndex = 0;
}

PhoneBook::~PhoneBook(){}

std::string PhoneBook::getValidInput(const std::string& message)
{
    std::string line;

    while(1)
    {
        std::cout << message;
        std::getline(std::cin, line);

        if(!line.empty())
            return line;
        std::cout << "Field cannot be empty! Try again." << std::endl;
    }

}
void PhoneBook::add()
{
    std::cin.ignore(); 

    Contact newContact;
    std::string input;

    newContact.setFirstName(getValidInput("Enter first name: "));
    newContact.setLastName(getValidInput("Enter last name: "));
    newContact.setNickname(getValidInput("Enter nickname: "));
    newContact.setPhoneNumber(getValidInput("Enter phone number: "));
    newContact.setDarkestSecret(getValidInput("Enter darkest secret: "));


    if (_contactCount < 8) 
    {
        _contacts[_contactCount] = newContact;
        _contactCount++;
    } 
    else 
    {
        _contacts[_oldestContactIndex] = newContact;
        _oldestContactIndex = (_oldestContactIndex + 1) % 8;
    }
    
    std::cout << "Contact added successfully!" << std::endl;
}
void PhoneBook::search()
{
    int index;

    if(_contactCount == 0)
    {
        std::cout << "PhoneBook is empty" << std::endl;
        return;
    }

    displayContacts();

    std::cout << "Enter index to display: ";
    std::cin >> index;
    
    displayContact(index); 
}
void PhoneBook::displayContacts()
{
    std::cout << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First Name" << "|";
    std::cout << std::setw(10) << std::right << "Last Name" << "|";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;

    for(int i = 0; i < _contactCount; i++)
    {
        if(!_contacts[i].isEmpty())
        {
            std::cout << std::setw(10) << std::right << i << "|";
            std::cout << std::setw(10) << std::right << cutString(_contacts[i].getFirstName()) << "|";
            std::cout << std::setw(10) << std::right << cutString(_contacts[i].getLastName()) << "|";
            std::cout << std::setw(10) << std::right << cutString(_contacts[i].getNickname()) << std::endl;

        }
    }

}
void PhoneBook::displayContact(int index)
{
    if(index < 0 || index >= _contactCount || _contacts[index].isEmpty())
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
}

std::string PhoneBook::cutString(const std::string& str) {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}
