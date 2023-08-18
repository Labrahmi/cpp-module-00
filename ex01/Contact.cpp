/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:44:09 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/14 18:11:38 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(contactData data)
{
    firstName = data.firstName;
    lasttName = data.lasttName;
    nickName = data.nickName;
    phoneNumber = data.phoneNumber;
    darkestSecret = data.darkestSecret;
}

Contact::~Contact(){}

void    Contact::printContact()
{
    std::cout << "first name     : " << firstName << std::endl;
    std::cout << "last name      : " << lasttName << std::endl;
    std::cout << "nickname       : " << nickName << std::endl;
    std::cout << "phone number   : " << phoneNumber << std::endl;
    std::cout << "darkest secret : " << darkestSecret << std::endl;
}

std::string ft_trim(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 10);
        str[9] = '.';
    }
    return (str);
}

void    Contact::displayInfo(int index)
{
    std::cout << "|" << std::setw(10) << index << "|";
    std::cout << std::setw(10) << ft_trim(firstName) << "|";
    std::cout << std::setw(10) << ft_trim(lasttName) << "|";
    std::cout << std::setw(10) << ft_trim(nickName) << "|" << std::endl;
}
