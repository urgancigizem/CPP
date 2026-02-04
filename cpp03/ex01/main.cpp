#include "ScavTrap.hpp"

int main() 
{
    ScavTrap scav1("SC-001");
    
    std::cout << "Name: " << scav1.getName() << std::endl;
    std::cout << "Hit Points: " << scav1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scav1.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scav1.getAttackDamage() << std::endl;
    
    scav1.attack("Enemy Robot");
    
    scav1.takeDamage(30);
    scav1.takeDamage(40);
    
    scav1.beRepaired(25);
    
    scav1.guardGate();
    
    ScavTrap scav2("SC-002");
    ScavTrap scav3("SC-003");
    
    scav2.attack("Target A");
    scav3.guardGate();

    ClapTrap clap("CT-999");
    ScavTrap scav("SC-999");
    
    std::cout << "\nClapTrap stats:" << std::endl;
    std::cout << "HP: " << clap.getHitPoints() << ", Energy: " << clap.getEnergyPoints() 
              << ", Damage: " << clap.getAttackDamage() << std::endl;
    
    std::cout << "\nScavTrap stats:" << std::endl;
    std::cout << "HP: " << scav.getHitPoints() << ", Energy: " << scav.getEnergyPoints() 
              << ", Damage: " << scav.getAttackDamage() << std::endl;
    
    std::cout << "\nClapTrap attack:" << std::endl;
    clap.attack("Test Target");
    
    std::cout << "\nScavTrap attack:" << std::endl;
    scav.attack("Test Target");
    
    std::cout << "\n=== Destruction Chaining Test ===" << std::endl;
    return 0;
}