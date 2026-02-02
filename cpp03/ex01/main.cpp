#include "ScavTrap.hpp"

int main() 
{
    std::cout << "=== Construction Chaining Test ===" << std::endl;
    ScavTrap scav1("SC-001");
    
    std::cout << "\n=== Testing ScavTrap Stats ===" << std::endl;
    std::cout << "Name: " << scav1.getName() << std::endl;
    std::cout << "Hit Points: " << scav1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scav1.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scav1.getAttackDamage() << std::endl;
    
    std::cout << "\n=== Testing ScavTrap Attack ===" << std::endl;
    scav1.attack("Enemy Robot");
    scav1.attack("Another Enemy");
    
    std::cout << "\n=== Testing Take Damage ===" << std::endl;
    scav1.takeDamage(30);
    scav1.takeDamage(40);
    
    std::cout << "\n=== Testing Repair ===" << std::endl;
    scav1.beRepaired(25);
    
    std::cout << "\n=== Testing Guard Gate (Special Ability) ===" << std::endl;
    scav1.guardGate();
    
    std::cout << "\n=== Testing Multiple ScavTraps ===" << std::endl;
    ScavTrap scav2("SC-002");
    ScavTrap scav3("SC-003");
    
    scav2.attack("Target A");
    scav3.guardGate();
    
    std::cout << "\n=== Testing Energy Depletion ===" << std::endl;
    ScavTrap scav4("SC-004");
    for (int i = 0; i < 51; i++) {
        scav4.attack("Training Dummy");
    }
    
    std::cout << "\n=== Testing Copy Constructor ===" << std::endl;
    ScavTrap scav5("SC-005");
    ScavTrap scav6(scav5);
    scav6.attack("Clone Target");
    
    std::cout << "\n=== Testing Copy Assignment ===" << std::endl;
    ScavTrap scav7("SC-007");
    ScavTrap scav8("SC-008");
    scav8 = scav7;
    scav8.guardGate();
    
    std::cout << "\n=== Comparing ClapTrap vs ScavTrap ===" << std::endl;
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