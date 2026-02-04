#include "DiamondTrap.hpp"

int main() {
    std::cout << "=== DiamondTrap Construction Chaining ===" << std::endl;
    DiamondTrap diamond1("Diamond1");
    
    std::cout << "Name: " << diamond1.getName() << std::endl;
    std::cout << "Hit Points: " << diamond1.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << diamond1.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << diamond1.getAttackDamage() << std::endl;
    
    std::cout << "\n=========" << std::endl;
    diamond1.whoAmI();
    
    std::cout << "\n==========" << std::endl;
    diamond1.attack("Enemy");
    
    std::cout << "\n===========" << std::endl;
    diamond1.guardGate();
    diamond1.highFivesGuys();
    
    std::cout << "\n===========" << std::endl;
    diamond1.takeDamage(40);
    diamond1.beRepaired(20);
    
    std::cout << "\n=========" << std::endl;
    DiamondTrap diamond2("Diamond2");
    diamond2.whoAmI();
    diamond2.attack("Target");
    
    std::cout << "\n=== Destruction ===" << std::endl;
    return 0;
}
