#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "=*= Test 1: Basic Polymorphism =*=" << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n=*= Test 2: WrongAnimal (non-virtual) =*=" << std::endl;
	const WrongAnimal*	wrongMeta = new WrongAnimal();
	const WrongAnimal*	wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;

	std::cout << "\n=*= Test 3: Stack & Reference Polymorphism =*=" << std::endl;
	Dog	dog;
	Cat	cat;
	const Animal&	dogRef = dog;
	const Animal&	catRef = cat;

	dogRef.makeSound();
	catRef.makeSound();

	std::cout << "\n=*= Test 4: Copy Constructor =*=" << std::endl;
	Dog	original;
	Dog	copied(original);

	std::cout << "Original: " << original.getType() << std::endl;
	std::cout << "Copied:   " << copied.getType() << std::endl;
	original.makeSound();
	copied.makeSound();

	std::cout << "\n=*= Test 5: Assignment Operator =*=" << std::endl;
	Cat	cat1;
	Cat	cat2;

	cat2 = cat1;
	std::cout << "cat1: " << cat1.getType() << std::endl;
	std::cout << "cat2: " << cat2.getType() << std::endl;

	std::cout << "\n=*= Test 6: Animal Pointer Array =*=" << std::endl;
	const Animal*	animals[4];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	for (int idx = 0; idx < 4; idx++)
	{
		std::cout << animals[idx]->getType() << ": ";
		animals[idx]->makeSound();
	}
	for (int idx = 0; idx < 4; idx++)
		delete animals[idx];

	return (0);
}
