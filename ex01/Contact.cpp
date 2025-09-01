#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}
void Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}
std::string Contact::getFirstName() const
{
    return this->_firstName;
}
std::string Contact::getLastName() const
{
    return this->_lastName;
}
std::string Contact::getNickname() const
{
    return this->_nickname;
}
std::string Contact::getPhoneNumber() const
{
    return this->_phoneNumber;
}
std::string Contact::getDarkestSecret() const
{
    return this->_darkestSecret;
}

bool Contact::isEmpty() const
{
    return (_firstName.empty() && 
            _lastName.empty() && 
            _nickname.empty() && 
            _phoneNumber.empty() && 
            _darkestSecret.empty());           
}