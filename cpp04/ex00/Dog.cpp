#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const & other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	Animal::operator=(other);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}
