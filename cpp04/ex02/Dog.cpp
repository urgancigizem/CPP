#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const & other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}
