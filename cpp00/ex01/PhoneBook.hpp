#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook{

private:
    Contact _contacts[8];
    int _contactCount;
    int _oldestContactIndex;
    std::string cutString(const std::string& str);
    std::string getValidInput(const std::string& message);
    //bool isDigitFunc(const std::string& phone);
    //bool isLetterFunc(const std::string& name);


public:
    PhoneBook();
    ~PhoneBook();

    void add();
    void search();
    void displayContacts();
    void displayContact(int index);

};


#endif