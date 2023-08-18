/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:44:11 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/14 18:11:05 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ContactClass
#define ContactClass
#include <string>
#include <iostream>
#include <iomanip>

typedef struct
{
    std::string firstName;
    std::string lasttName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
}   contactData;

class Contact
{
private:
    std::string firstName;
    std::string lasttName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact();
    Contact(contactData data);
    ~Contact();
    
    void    printContact();
    void    displayInfo(int index);
};

#endif