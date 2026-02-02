#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// --- Test 1: Verilen örnek (delete leak testi) ---
	std::cout << "=== Test 1: Basic new/delete ===" << std::endl;
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	delete i;

	// --- Test 2: Animal* array, yarısı Dog yarısı Cat ---
	std::cout << "\n=== Test 2: Animal Array (half Dog, half Cat) ===" << std::endl;
	const int	SIZE = 8;
	Animal*		animals[SIZE];

	for (int idx = 0; idx < SIZE; idx++)
	{
		if (idx % 2 == 0)
			animals[idx] = new Dog();
		else
			animals[idx] = new Cat();
	}

	std::cout << "\n--- Sounds ---" << std::endl;
	for (int idx = 0; idx < SIZE; idx++)
	{
		std::cout << animals[idx]->getType() << ": ";
		animals[idx]->makeSound();
	}

	std::cout << "\n--- Deleting all as Animal* ---" << std::endl;
	for (int idx = 0; idx < SIZE; idx++)
		delete animals[idx];

	// --- Test 3: Deep copy testi (Dog) ---
	std::cout << "\n=== Test 3: Deep Copy Test (Dog) ===" << std::endl;
	Dog	original;
	original.getBrain()->ideas[0] = "I love bones";
	original.getBrain()->ideas[1] = "Chase the cat";

	Dog	copied(original);

	std::cout << "Original brain[0]: " << original.getBrain()->ideas[0] << std::endl;
	std::cout << "Copied   brain[0]: " << copied.getBrain()->ideas[0] << std::endl;
	std::cout << "Original brain ptr: " << original.getBrain() << std::endl;
	std::cout << "Copied   brain ptr: " << copied.getBrain() << std::endl;

	// Deep copy olduğundan pointer farklı olmalı
	if (original.getBrain() != copied.getBrain())
		std::cout << "Deep copy OK - pointers are different!" << std::endl;
	else
		std::cout << "ERROR - shallow copy!" << std::endl;

	// Copied'in brain'ini değiştir, original etkilenmemeli
	copied.getBrain()->ideas[0] = "I love cats now";
	std::cout << "After modifying copy:" << std::endl;
	std::cout << "Original brain[0]: " << original.getBrain()->ideas[0] << std::endl;
	std::cout << "Copied   brain[0]: " << copied.getBrain()->ideas[0] << std::endl;

	// --- Test 4: Deep copy testi (Cat) ---
	std::cout << "\n=== Test 4: Deep Copy Test (Cat) ===" << std::endl;
	Cat	catOriginal;
	catOriginal.getBrain()->ideas[0] = "I love fish";

	Cat	catCopied(catOriginal);

	std::cout << "Original brain[0]: " << catOriginal.getBrain()->ideas[0] << std::endl;
	std::cout << "Copied   brain[0]: " << catCopied.getBrain()->ideas[0] << std::endl;

	if (catOriginal.getBrain() != catCopied.getBrain())
		std::cout << "Deep copy OK - pointers are different!" << std::endl;
	else
		std::cout << "ERROR - shallow copy!" << std::endl;

	// --- Test 5: Assignment operator deep copy testi ---
	std::cout << "\n=== Test 5: Assignment Operator Deep Copy ===" << std::endl;
	Dog	dog1;
	dog1.getBrain()->ideas[0] = "Dog1 idea";

	Dog	dog2;
	dog2.getBrain()->ideas[0] = "Dog2 idea";

	std::cout << "Before assignment:" << std::endl;
	std::cout << "dog1 brain[0]: " << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "dog2 brain[0]: " << dog2.getBrain()->ideas[0] << std::endl;

	dog2 = dog1;

	std::cout << "After dog2 = dog1:" << std::endl;
	std::cout << "dog1 brain[0]: " << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "dog2 brain[0]: " << dog2.getBrain()->ideas[0] << std::endl;

	if (dog1.getBrain() != dog2.getBrain())
		std::cout << "Deep copy OK - pointers are different!" << std::endl;
	else
		std::cout << "ERROR - shallow copy!" << std::endl;

	return (0);
}
