#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "Walker";
    
    std::cout << "Creating a horde of " << N << " zombies named '" << name << "'..." << std::endl;
    std::cout << std::endl;
    
    // Zombie horde oluştur
    Zombie* horde = zombieHorde(N, name);
    
    // Her zombie'nin announce fonksiyonunu çağır
    std::cout << "Zombies announcing themselves:" << std::endl;
    for (int i = 0; i < N; i++)
    {
        std::cout << "Zombie #" << i << ": ";
        horde[i].announce();
    }
    
    std::cout << std::endl;
    std::cout << "Deleting the horde..." << std::endl;
    
    // Tüm horde'u sil (tek bir delete[] çağrısı ile)
    delete[] horde;
    
    std::cout << std::endl;
    std::cout << "Testing with different sizes:" << std::endl;
    
    // Farklı boyutlarda test
    Zombie* smallHorde = zombieHorde(3, "Crawler");
    std::cout << "\nSmall horde:" << std::endl;
    for (int i = 0; i < 3; i++)
        smallHorde[i].announce();
    delete[] smallHorde;
    
    // Edge case: N = 1
    std::cout << "\nSingle zombie:" << std::endl;
    Zombie* single = zombieHorde(1, "Loner");
    single[0].announce();
    delete[] single;
    
    // Edge case: N = 0 veya negatif
    std::cout << "\nTesting invalid size (N=0):" << std::endl;
    Zombie* invalid = zombieHorde(0, "None");
    if (invalid == NULL)
        std::cout << "Correctly returned NULL for invalid size" << std::endl;
    
    return 0;
}