#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// --- Test 1: Animal* pointer ile Dog/Cat yaratma (hala çalışmalı) ---
	std::cout << "=== Test 1: Polymorphism still works ===" << std::endl;
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << i->getType() << ": ";
	i->makeSound();

	delete j;
	delete i;

	// --- Test 2: Array testi ---
	std::cout << "\n=== Test 2: Animal Array ===" << std::endl;
	const int	SIZE = 6;
	Animal*		animals[SIZE];

	for (int idx = 0; idx < SIZE; idx++)
	{
		if (idx % 2 == 0)
			animals[idx] = new Dog();
		else
			animals[idx] = new Cat();
	}

	for (int idx = 0; idx < SIZE; idx++)
	{
		std::cout << animals[idx]->getType() << ": ";
		animals[idx]->makeSound();
	}

	for (int idx = 0; idx < SIZE; idx++)
		delete animals[idx];

	// --- Test 3: Deep copy testi ---
	std::cout << "\n=== Test 3: Deep Copy ===" << std::endl;
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

	// --- Test 4: Assignment operator ---
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

	// --- NOTE: Aşağıdaki satırı uncomment edersen compile error verir ---
	// const Animal* meta = new Animal(); // ERROR: cannot instantiate abstract class

	return (0);
}
