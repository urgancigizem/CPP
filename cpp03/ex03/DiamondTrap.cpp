#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap()
    : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), _name("Default") {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

// Parametric constructor
DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

// Copy assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    return *this;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

// Attack (uses ScavTrap's style message)
void DiamondTrap::attack(const std::string& target) {
    if (_hitPoints == 0) {
        std::cout << "DiamondTrap " << _name << " can't attack, no hit points!" << std::endl;
        return;
    }
    if (_energyPoints == 0) {
        std::cout << "DiamondTrap " << _name << " can't attack, no energy points!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << ClapTrap::_name << " ferociously attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

// Special ability
void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << _name
              << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}