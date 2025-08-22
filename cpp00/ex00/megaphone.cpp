/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorshhe <emorshhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:31:12 by emorshhe          #+#    #+#             */
/*   Updated: 2025/08/22 08:43:05 by emorshhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }

    int i = 1;
    while (i < argc) {
        if (i > 1)
            std::cout << ' ';

        int j = 0;
        while (argv[i][j] != '\0') {
            unsigned char uc = static_cast<unsigned char>(argv[i][j]);
            std::cout << static_cast<char>(std::toupper(uc));
            j++;
        }

        i++;
    }

    std::cout << '\n';
    return 0;
}
