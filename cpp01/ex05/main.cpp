#include "Harl.hpp"

int main()
{
    Harl harl;
    
    std::cout << "=== Testing all complaint levels ===" << std::endl;
    std::cout << std::endl;
    
    harl.complain("DEBUG");
    
    harl.complain("INFO");
    
    harl.complain("WARNING");
    
    harl.complain("ERROR");
    
    std::cout << "=== Testing invalid levels ===" << std::endl;
    std::cout << std::endl;
    
    harl.complain("CRITICAL");
    harl.complain("debug");
    harl.complain("");
    
    std::cout << "=== Testing repeated complaints ===" << std::endl;
    std::cout << std::endl;
    
    harl.complain("ERROR");
    harl.complain("WARNING");
    harl.complain("ERROR");
    
    return 0;
}