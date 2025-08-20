/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorshhe <emorshhe>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:31:12 by emorshhe          #+#    #+#             */
/*   Updated: 2025/08/17 22:42:17 by emorshhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : index(0), contactCount(0) {}

void PhoneBook::addContact(const Contact &c)
{
    contacts[index] = c;
    index = (index + 1) % 8;
    if (contactCount < 8) contactCount++;
}

std::string PhoneBook::truncate(const std::string &str) const
{
    if (str.length() > 10) return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::displayContacts() const
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < contactCount; ++i)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getNickname()) << std::endl;
    }
}

void PhoneBook::displayContactDetails(int i) const
{
    if (i < 0 || i >= contactCount)
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    std::cout << "First Name: " << contacts[i].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[i].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << std::endl;
}

int PhoneBook::getContactCount() const
{
    return contactCount;
}



