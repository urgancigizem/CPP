#include "DiamondTrap.hpp"

int main() {
    std::cout << "=== DiamondTrap Construction Chaining ===" << std::endl;
    DiamondTrap diamond1("DT-001");
    
    std::cout << "\n=== Testing DiamondTrap Stats ===" << std::endl;
    std::cout << "Name: " << diamond1.getName() << std::endl;
    std::cout << "Hit Points: " << diamond1.getHitPoints() << " (should be 100 from FragTrap)" << std::endl;
    std::cout << "Energy Points: " << diamond1.getEnergyPoints() << " (should be 50 from ScavTrap)" << std::endl;
    std::cout << "Attack Damage: " << diamond1.getAttackDamage() << " (should be 30 from FragTrap)" << std::endl;
    
    std::cout << "\n=== Testing whoAmI (Special Ability) ===" << std::endl;
    diamond1.whoAmI();
    
    std::cout << "\n=== Testing Attack (Should use ScavTrap's attack) ===" << std::endl;
    diamond1.attack("Enemy");
    diamond1.attack("Another Enemy");
    
    std::cout << "\n=== Testing Inherited Abilities ===" << std::endl;
    diamond1.guardGate();      // From ScavTrap
    diamond1.highFivesGuys();  // From FragTrap
    
    std::cout << "\n=== Testing Take Damage ===" << std::endl;
    diamond1.takeDamage(40);
    diamond1.takeDamage(30);
    
    std::cout << "\n=== Testing Repair ===" << std::endl;
    diamond1.beRepaired(35);
    
    std::cout << "\n=== Testing Multiple DiamondTraps ===" << std::endl;
    DiamondTrap diamond2("DT-002");
    DiamondTrap diamond3("DT-003");
    
    diamond2.whoAmI();
    diamond3.whoAmI();
    
    std::cout << "\n=== Testing All Abilities ===" << std::endl;
    diamond2.attack("Target");
    diamond2.guardGate();
    diamond2.highFivesGuys();
    diamond2.whoAmI();
    
    std::cout << "\n=== Testing Copy Constructor ===" << std::endl;
    DiamondTrap diamond4("DT-004");
    DiamondTrap diamond5(diamond4);
    
    std::cout << "Original:" << std::endl;
    diamond4.whoAmI();
    std::cout << "Copy:" << std::endl;
    diamond5.whoAmI();
    
    std::cout << "\n=== Testing Copy Assignment ===" << std::endl;
    DiamondTrap diamond6("DT-006");
    DiamondTrap diamond7("DT-007");
    
    std::cout << "Before assignment:" << std::endl;
    diamond7.whoAmI();
    
    diamond7 = diamond6;
    
    std::cout << "After assignment:" << std::endl;
    diamond7.whoAmI();
    
    std::cout << "\n=== Comparing All Four Types ===" << std::endl;
    ClapTrap clap("CT-999");
    ScavTrap scav("SC-999");
    FragTrap frag("FT-999");
    DiamondTrap diamond("DT-999");
    
    std::cout << "\n--- ClapTrap ---" << std::endl;
    std::cout << "HP: " << clap.getHitPoints() << ", Energy: " << clap.getEnergyPoints() 
              << ", Damage: " << clap.getAttackDamage() << std::endl;
    clap.attack("Test");
    
    std::cout << "\n--- ScavTrap ---" << std::endl;
    std::cout << "HP: " << scav.getHitPoints() << ", Energy: " << scav.getEnergyPoints() 
              << ", Damage: " << scav.getAttackDamage() << std::endl;
    scav.attack("Test");
    scav.guardGate();
    
    std::cout << "\n--- FragTrap ---" << std::endl;
    std::cout << "HP: " << frag.getHitPoints() << ", Energy: " << frag.getEnergyPoints() 
              << ", Damage: " << frag.getAttackDamage() << std::endl;
    frag.attack("Test");
    frag.highFivesGuys();
    
    std::cout << "\n--- DiamondTrap ---" << std::endl;
    std::cout << "HP: " << diamond.getHitPoints() << ", Energy: " << diamond.getEnergyPoints() 
              << ", Damage: " << diamond.getAttackDamage() << std::endl;
    diamond.attack("Test");
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();
    
    std::cout << "\n=== Battle Arena ===" << std::endl;
    DiamondTrap warrior1("Warrior-1");
    DiamondTrap warrior2("Warrior-2");
    
    std::cout << "\nWarriors introduce themselves:" << std::endl;
    warrior1.whoAmI();
    warrior2.whoAmI();
    
    std::cout << "\nRound 1:" << std::endl;
    warrior1.attack("Warrior-2");
    warrior2.takeDamage(30);
    
    std::cout << "\nRound 2:" << std::endl;
    warrior2.attack("Warrior-1");
    warrior1.takeDamage(30);
    
    std::cout << "\nBoth warriors activate special modes:" << std::endl;
    warrior1.guardGate();
    warrior2.guardGate();
    
    std::cout << "\nCelebration:" << std::endl;
    warrior1.highFivesGuys();
    warrior2.highFivesGuys();
    
    std::cout << "\n=== Destruction Chaining Test ===" << std::endl;
    return 0;
}