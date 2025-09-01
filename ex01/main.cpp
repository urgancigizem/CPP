/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurganci <gurganci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:40:17 by gurganci          #+#    #+#             */
/*   Updated: 2025/09/01 15:59:09 by gurganci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main() 
{
    PhoneBook phoneBook;
    std::string line;
    
    std::cout << "Welcome to PhoneBook!" << std::endl;

    while (1) 
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, line);

        if(std::cin.eof())
            break;
        if (line == "ADD" || line == "Add" || line == "add")
            phoneBook.add();
        else if (line == "SEARCH" || line == "Search" || line == "search")
            phoneBook.search();
        else if (line == "EXIT" || line == "exit" || line == "Exit")
            break;
        else
            std::cout << "Invalid command! Use: ADD, SEARCH, EXIT" << std::endl;
    }
    
    return 0;
}