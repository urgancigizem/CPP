/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurganci <gurganci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:38:53 by gurganci          #+#    #+#             */
/*   Updated: 2025/09/01 15:32:26 by gurganci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if(argc > 1)
    {
        while(argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                std::cout << (char) std::toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
	return (0);
}
