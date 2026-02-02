#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;

public:
    DiamondTrap();
    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap& other);
    ~DiamondTrap();

    // Resolve all ambiguous functions from ClapTrap
    using ClapTrap::attack;
    using ClapTrap::takeDamage;
    using ClapTrap::beRepaired;
    using ClapTrap::getName;
    using ClapTrap::getHitPoints;
    using ClapTrap::getEnergyPoints;
    using ClapTrap::getAttackDamage;

    // Override attack with ScavTrap's version
    void attack(const std::string& target);

    // Special ability
    void whoAmI();
};

#endif