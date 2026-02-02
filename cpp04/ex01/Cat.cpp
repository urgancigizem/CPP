#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const & other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->brain);
}
