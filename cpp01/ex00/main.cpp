#include "Zombie.hpp"

int main()
{
    std::cout << "==newZombie(heap) test==" << std::endl;

    Zombie* heapZombie = newZombie("Heap");
    heapZombie->announce();

    std::cout << "==randomChump(stack) test==" << std::endl;

    randomChump("Stack");

    delete heapZombie;
    
    return (0);
}