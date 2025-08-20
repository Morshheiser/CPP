/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorshhe <emorshhe>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:31:12 by emorshhe          #+#    #+#             */
/*   Updated: 2025/08/18 17:04:30 by emorshhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* obj = newZombie("zz");
    
    obj->announce();
    
    delete obj;
    
    randomChump("RandomZombie");

    return 0;
}