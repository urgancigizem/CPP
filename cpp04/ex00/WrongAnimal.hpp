#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal(void);
	WrongAnimal(std::string const & type);
	WrongAnimal(WrongAnimal const & other);
	WrongAnimal & operator=(WrongAnimal const & other);
	~WrongAnimal(void);

	std::string const & getType(void) const;
	void makeSound(void) const;
};

#endif
