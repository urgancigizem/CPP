#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << i->getType() << ": ";
	i->makeSound();

	delete j;
	delete i;

	std::cout << "\n===  Animal Array ===" << std::endl;
	const int	SIZE = 6;
	Animal*		animals[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int j = 0; j < SIZE; j++)
	{
		std::cout << animals[j]->getType() << ": ";
		animals[j]->makeSound();
	}

	for (int k = 0; k < SIZE; k++)
		delete animals[k];

	std::cout << "\n===Deep Copy ===" << std::endl;
	Dog	original;
	original.getBrain()->ideas[0] = "Abstract world";

	Dog	copied(original);
	std::cout << "Original brain[0]: " << original.getBrain()->ideas[0] << std::endl;
	std::cout << "Copied   brain[0]: " << copied.getBrain()->ideas[0] << std::endl;

	if (original.getBrain() != copied.getBrain())
		std::cout << "Deep copy OK!" << std::endl;
	else
		std::cout << "ERROR - shallow copy!" << std::endl;

	copied.getBrain()->ideas[0] = "Changed";
	std::cout << "After modify - Original: " << original.getBrain()->ideas[0] << std::endl;
	std::cout << "After modify - Copied:   " << copied.getBrain()->ideas[0] << std::endl;

	std::cout << "\n=== Test 4: Assignment Operator ===" << std::endl;
	Cat	cat1;
	cat1.getBrain()->ideas[0] = "Cat idea 1";

	Cat	cat2;
	cat2 = cat1;

	std::cout << "cat1 brain[0]: " << cat1.getBrain()->ideas[0] << std::endl;
	std::cout << "cat2 brain[0]: " << cat2.getBrain()->ideas[0] << std::endl;

	if (cat1.getBrain() != cat2.getBrain())
		std::cout << "Deep copy OK!" << std::endl;
	else
		std::cout << "ERROR - shallow copy!" << std::endl;

	return (0);
}
