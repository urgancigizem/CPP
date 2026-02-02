#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const & type) : type(type)
{
	std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & other)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string const & WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound: ..." << std::endl;
}
