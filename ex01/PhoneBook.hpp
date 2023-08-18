/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:44:15 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/19 23:19:52 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBookClass
#define PhoneBookClass
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    static int currentIndex;
    static int totalRecords;

public:
    PhoneBook();
    ~PhoneBook();

    void    addContact(Contact newContact);
    void    printContacts();
    void    printOneContact();

};

#endif