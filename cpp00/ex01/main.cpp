/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorshhe <emorshhe>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:31:12 by emorshhe          #+#    #+#             */
/*   Updated: 2025/08/17 22:46:18 by emorshhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <sstream> 

int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            Contact c;
            std::string input;

            do {
                std::cout << "First Name: ";
                std::getline(std::cin, input);
            } while(input.empty());
            c.setFirstName(input);

            do {
                std::cout << "Last Name: ";
                std::getline(std::cin, input);
            } while(input.empty());
            c.setLastName(input);

            do {
                std::cout << "Nickname: ";
                std::getline(std::cin, input);
            } while(input.empty());
            c.setNickname(input);

            do {
                std::cout << "Phone Number: ";
                std::getline(std::cin, input);
            } while(input.empty());
            c.setPhoneNumber(input);

            do {
                std::cout << "Darkest Secret: ";
                std::getline(std::cin, input);
            } while(input.empty());
            c.setDarkestSecret(input);

            phoneBook.addContact(c);
        }
        else if (command == "SEARCH")
        {
            phoneBook.displayContacts();
            std::cout << "Enter index to view details: ";
            std::getline(std::cin, command);

            std::stringstream ss(command);
            int idx;
            if (!(ss >> idx))
                std::cout << "Invalid index!" << std::endl;
            
            else
                phoneBook.displayContactDetails(idx);
        }
        else
            std::cout << "Unknown command!" << std::endl;
    }
    return 0;
}


