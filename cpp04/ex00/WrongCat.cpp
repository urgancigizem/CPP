#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & other)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	WrongAnimal::operator=(other);
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound: Meow!" << std::endl;
}
