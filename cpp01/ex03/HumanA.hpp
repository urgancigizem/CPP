#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	std::string name;
	Weapon& weapon;  // Reference - her zaman silahlı

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	
	void attack() const;
};

#endif