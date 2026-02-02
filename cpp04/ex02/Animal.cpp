#include "Animal.hpp"

Animal::Animal(void) : type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string const & type) : type(type)
{
	std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(Animal const & other) : type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string const & Animal::getType(void) const
{
	return (this->type);
}

