#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{

    FragTrap frag("FT-Gizem");
    
    std::cout << "HP: " << frag.getHitPoints() << ", Energy: " << frag.getEnergyPoints() 
              << ", Damage: " << frag.getAttackDamage() << std::endl;
    

    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();
    
    ClapTrap clap("CT-Base");
    ScavTrap scav("SC-Guard");
    FragTrap frag2("FT-Damage");
    
    clap.attack("Target");
    scav.attack("Target");
    scav.guardGate();
    frag2.attack("Target");
    frag2.highFivesGuys();
    
    FragTrap copy(frag);
    copy.highFivesGuys();
    
    std::cout << "\n=== Destructors ===" << std::endl;
    return 0;
}