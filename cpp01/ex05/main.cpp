#include "Harl.hpp"

int main()
{
    Harl harl;
    
    std::cout << "=== Testing all complaint levels ===" << std::endl;
    std::cout << std::endl;
    
    // DEBUG level test
    harl.complain("DEBUG");
    
    // INFO level test
    harl.complain("INFO");
    
    // WARNING level test
    harl.complain("WARNING");
    
    // ERROR level test
    harl.complain("ERROR");
    
    std::cout << "=== Testing invalid levels ===" << std::endl;
    std::cout << std::endl;
    
    // Invalid level test
    harl.complain("CRITICAL");
    harl.complain("debug");  // case sensitive
    harl.complain("");
    
    std::cout << "=== Testing repeated complaints ===" << std::endl;
    std::cout << std::endl;
    
    // Harl never gets tired of complaining!
    harl.complain("ERROR");
    harl.complain("WARNING");
    harl.complain("ERROR");
    
    return 0;
}