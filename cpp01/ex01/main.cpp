/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorshhe <emorshhe>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:31:12 by emorshhe          #+#    #+#             */
/*   Updated: 2025/08/18 17:35:36 by emorshhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N;
    int i;
    
    N = 5;
    Zombie* horde = zombieHorde(N, "Ezequiel");
    i = 0;
    while (i < N)
    {
        horde[i].announce();
        i++;
    }

    delete[] horde;
    return 0;
}
