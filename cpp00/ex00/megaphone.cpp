/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorshhe <emorshhe>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:31:12 by emorshhe          #+#    #+#             */
/*   Updated: 2025/08/17 20:55:05 by emorshhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i;
    int j;
 
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    else
    {
        i = 1;
        while (i < argc)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                std::cout << (char)std::toupper(argv[i][j]);
                j++;
            }
            i++;
        } 
    }    
    std::cout << std::endl;
    return 0;
}