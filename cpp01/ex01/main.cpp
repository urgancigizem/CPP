#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "Gizem";
    
    Zombie* horde = zombieHorde(N, name);
    
    for (int i = 0; i < N; i++)
    {
        std::cout << i << ". Zombie : " ;
        horde[i].announce();
    }
    
    std::cout << std::endl;
    
    delete[] horde;
    
    std::cout << std::endl;
    std::cout << "Testing with different sizes:" << std::endl;
    
    Zombie* smallHorde = zombieHorde(3, "Cem");
    std::cout << "\nSmall horde:" << std::endl;
    for (int i = 0; i < 3; i++)
        smallHorde[i].announce();
    delete[] smallHorde;
    
    std::cout << "\nSingle zombie:" << std::endl;
    Zombie* single = zombieHorde(1, "Single");
    single[0].announce();
    delete[] single;
    
    std::cout << "\nInvalid usage:" << std::endl;
    Zombie* invalid = zombieHorde(0, "None");
    if (invalid == NULL)
        std::cout << "Invalid size" << std::endl;

    return 0;
}