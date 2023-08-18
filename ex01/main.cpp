/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:43:20 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/19 23:19:46 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

std::string ftPrintReader(std::string message)
{
    std::string returned;

    std::cout << message;
    std::getline(std::cin, returned);
    return (returned);
}

int main(void)
{
    std::string promt;
    contactData newContactData;
    PhoneBook   myPhoneBook;

    while (1)
    {
        promt = ftPrintReader("Write your command : ");
        if (promt == "ADD")
        {
            newContactData.firstName = ftPrintReader("Contact's first name : ");
            newContactData.lasttName = ftPrintReader("Contact's last name : ");
            newContactData.nickName = ftPrintReader("Contact's nickname : ");
            newContactData.phoneNumber = ftPrintReader("Contact's phone number : ");
            newContactData.darkestSecret = ftPrintReader("Contact's darkest secret : ");
            Contact newContact(newContactData);
            myPhoneBook.addContact(newContact);
            std::cout << "~Added Successfully~" << std::endl;
        }
        if (promt == "SEARCH")
        {
            myPhoneBook.printContacts();
            myPhoneBook.printOneContact();
            std::cout << std::endl;
        }
        if (promt == "EXIT" || std::cin.eof())
            return (0);
    }
    return (0);
}

