#include "ClapTrap.hpp"

int main() 
{
    ClapTrap clap1("Gizem");
    ClapTrap clap2("Cem");
    
    clap1.attack("Enemy");
    clap1.attack("Enemy");
    
    clap2.takeDamage(5);
    clap2.takeDamage(3);
    
    clap2.beRepaired(4);
    
    std::cout << "\n=*= Energy Depletion =*=" << std::endl;
    ClapTrap clap3("Ecrin");
    for (int i = 0; i < 11; i++) 
    {
        clap3.attack("Target");
    }
    clap3.beRepaired(5);
    
    std::cout << "\n=*= Death =*=" << std::endl;
    ClapTrap clap4("Can");
    clap4.takeDamage(15);
    clap4.attack("Ghost");
    clap4.beRepaired(5);
    
    std::cout << "\n=*= Copy Constructor =*=" << std::endl;
    ClapTrap clap5("Umit");
    ClapTrap clap6(clap5);
    clap6.attack("Clone Target");
    
    std::cout << "\n=*= Copy Assignment =*=" << std::endl;
    ClapTrap clap7("Hilal");
    ClapTrap clap8("Irem");
    clap8 = clap7;
    clap8.attack("Assigned Target");
    
    return 0;
}