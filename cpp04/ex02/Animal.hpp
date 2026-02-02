#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal(void);
	Animal(std::string const & type);
	Animal(Animal const & other);
	Animal & operator=(Animal const & other);
	virtual ~Animal(void);

	std::string const & getType(void) const;
	virtual void makeSound(void) const = 0;
};

#endif
