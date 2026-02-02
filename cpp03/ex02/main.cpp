#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    std::cout << "=== FragTrap Construction Chaining ===" << std::endl;
    FragTrap frag1("FT-001");
    
    std::cout << "\n=== Testing FragTrap Stats ===" << std::endl;
    std::cout << "Name: " << frag1.getName() << std::endl;
    std::cout << "Hit Points: " << frag1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << frag1.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << frag1.getAttackDamage() << std::endl;
    
    std::cout << "\n=== Testing FragTrap Attack ===" << std::endl;
    frag1.attack("Enemy Robot");
    frag1.attack("Another Enemy");
    
    std::cout << "\n=== Testing Take Damage ===" << std::endl;
    frag1.takeDamage(40);
    frag1.takeDamage(30);
    
    std::cout << "\n=== Testing Repair ===" << std::endl;
    frag1.beRepaired(35);
    
    std::cout << "\n=== Testing High Five (Special Ability) ===" << std::endl;
    frag1.highFivesGuys();
    
    std::cout << "\n=== Testing Multiple FragTraps ===" << std::endl;
    FragTrap frag2("FT-002");
    FragTrap frag3("FT-003");
    
    frag2.attack("Target A");
    frag3.highFivesGuys();
    
    std::cout << "\n=== Testing Energy Depletion ===" << std::endl;
    FragTrap frag4("FT-004");
    for (int i = 0; i < 101; i++) {
        if (i % 20 == 0)
            std::cout << "Attack #" << i + 1 << ":" << std::endl;
        frag4.attack("Training Dummy");
    }
    
    std::cout << "\n=== Testing Copy Constructor ===" << std::endl;
    FragTrap frag5("FT-005");
    FragTrap frag6(frag5);
    frag6.attack("Clone Target");
    frag6.highFivesGuys();
    
    std::cout << "\n=== Testing Copy Assignment ===" << std::endl;
    FragTrap frag7("FT-007");
    FragTrap frag8("FT-008");
    frag8 = frag7;
    frag8.highFivesGuys();
    
    std::cout << "\n=== Comparing All Three Types ===" << std::endl;
    ClapTrap clap("CT-999");
    ScavTrap scav("SC-999");
    FragTrap frag("FT-999");
    
    std::cout << "\n--- ClapTrap Stats ---" << std::endl;
    std::cout << "HP: " << clap.getHitPoints() << ", Energy: " << clap.getEnergyPoints() 
              << ", Damage: " << clap.getAttackDamage() << std::endl;
    clap.attack("Test");
    
    std::cout << "\n--- ScavTrap Stats ---" << std::endl;
    std::cout << "HP: " << scav.getHitPoints() << ", Energy: " << scav.getEnergyPoints() 
              << ", Damage: " << scav.getAttackDamage() << std::endl;
    scav.attack("Test");
    scav.guardGate();
    
    std::cout << "\n--- FragTrap Stats ---" << std::endl;
    std::cout << "HP: " << frag.getHitPoints() << ", Energy: " << frag.getEnergyPoints() 
              << ", Damage: " << frag.getAttackDamage() << std::endl;
    frag.attack("Test");
    frag.highFivesGuys();
    
    std::cout << "\n=== Battle Simulation ===" << std::endl;
    FragTrap fighter1("Fighter-1");
    FragTrap fighter2("Fighter-2");
    
    std::cout << "\nRound 1:" << std::endl;
    fighter1.attack("Fighter-2");
    fighter2.takeDamage(30);
    
    std::cout << "\nRound 2:" << std::endl;
    fighter2.attack("Fighter-1");
    fighter1.takeDamage(30);
    
    std::cout << "\nRound 3:" << std::endl;
    fighter1.beRepaired(20);
    fighter2.beRepaired(20);
    
    std::cout << "\nCelebration:" << std::endl;
    fighter1.highFivesGuys();
    fighter2.highFivesGuys();
    
    std::cout << "\n=== Destruction Chaining Test ===" << std::endl;
    return 0;
}