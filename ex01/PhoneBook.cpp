/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:44:13 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/14 18:22:47 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int PhoneBook::currentIndex = 0;

int PhoneBook::totalRecords = 0;

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

void    PhoneBook::addContact(Contact newContact)
{
    if (totalRecords < 8)
        totalRecords++;
    if (currentIndex > 7)
        currentIndex = 0;
    contacts[currentIndex++] = newContact;
}

void    PhoneBook::printContacts()
{
    int i = 0;

    std::cout << "*-------------------------------------------*" << std::endl;
    std::cout << "|   Index  |First Name|Last  Name| Nickname |" << std::endl;
    std::cout << "*-------------------------------------------*" << std::endl;
    while (i < totalRecords)
    {
        contacts[i].displayInfo(i);
        i++;
    }
    std::cout << "*-------------------------------------------*" << std::endl;
}

// ---------------------------------------------------------------------------------

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

static long long	helper(std::string str, long long some, int i, int sign)
{
	while (ft_isdigit(str[i]))
	{
		some = (some * 10) + (str[i] - '0');
		i++;
		if (some < 0)
		{
			if (sign != -1)
				return (-1);
			else
				return (0);
		}
	}
	return (some);
}

int	ft_atoi(std::string str)
{
	int		i;
	int		sign;
	long	some;

	i = 0;
	sign = 1;
	some = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (helper(str, some, i, sign) * sign);
}

// ---------------------------------------------------------------------------------

int pars_promt(std::string promt)
{
    int i;

    i = 0;
    while (promt[i])
    {
        if (!ft_isdigit(promt[i]))
            return (-1);
        i++;
    }
    i = ft_atoi(promt);
    return (i);
}

void    PhoneBook::printOneContact()
{
    std::string promt;
    int         index;

    std::cout << "Enter your index : ";
    std::getline(std::cin, promt);
    if (std::cin.eof())
        return ;
    index = pars_promt(promt);
    if ((index > -1) && (index < totalRecords))
        contacts[index].printContact();
    else
        std::cout << "Invalid Index!" << std::endl;
}
