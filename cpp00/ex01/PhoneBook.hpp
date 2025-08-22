/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorshhe <emorshhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:31:12 by emorshhe          #+#    #+#             */
/*   Updated: 2025/08/21 17:38:12 by emorshhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
        int contactCount;
        std::string truncate(const std::string& str) const;

    public:
        PhoneBook();
        void addContact(const Contact& c);
        void displayContacts() const;
        void displayContactDetails(int i) const;
        int getContactCount() const;
};

#endif


