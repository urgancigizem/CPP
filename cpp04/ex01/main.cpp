#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	delete i;

	std::cout << "\n---------------" << std::endl;

	const int	SIZE = 8;
	Animal*		animals[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n--- Sounds ---" << std::endl;
	for (int j = 0; j < SIZE; j++)
	{
		std::cout << animals[j]->getType() << ": ";
		animals[j]->makeSound();
	}

	std::cout << "\n--- Deleting ---" << std::endl;
	for (int idx = 0; idx < SIZE; idx++)
		delete animals[idx];

	std::cout << "\n=== Test 3: First Deep Copy Test ===" << std::endl;
	Dog	original;
	original.getBrain()->ideas[0] = "I love bones";
	original.getBrain()->ideas[1] = "Chase the cat";

	Dog	copied(original);

	std::cout << "Original brain[0]: " << original.getBrain()->ideas[0] << std::endl;
	std::cout << "Copied   brain[0]: " << copied.getBrain()->ideas[0] << std::endl;
	std::cout << "Original brain ptr: " << original.getBrain() << std::endl;
	std::cout << "Copied   brain ptr: " << copied.getBrain() << std::endl;

	copied.getBrain()->ideas[0] = "I love cats now";
	std::cout << "Original brain[0]: " << original.getBrain()->ideas[0] << std::endl;
	std::cout << "Copied   brain[0]: " << copied.getBrain()->ideas[0] << std::endl;

	std::cout << "\n=== Test 4: Assignment Operator Deep Copy Test ===" << std::endl;
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
	std::cout << "dog1 brain ptr: " << dog1.getBrain() << std::endl;
	std::cout << "dog2   brain ptr: " << dog2.getBrain() << std::endl;

	return (0);
}
