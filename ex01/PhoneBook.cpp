/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:01:19 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/23 20:50:22 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
** Function: PhoneBook constructor
** Description: Initializes the phone book with default values.
*/
PhoneBook::PhoneBook()
{
    _contactCount = 0;
    _oldestContactIndex = 0;
}

/*
** Function: PhoneBook destructor
** Description: Cleans up any resources used by the phone book. 
*/
PhoneBook::~PhoneBook()
{
    return ;
}

/*
** Function: addContact
** Description: Adds a new contact to the phone book. If the phone book is full,
** it overwrites the oldest contact. 
*/
void    PhoneBook::addContact()
{
    if (_contactCount < 8)
    {
        _contacts[_contactCount].setContact();
        _contactCount++;
    }
    else
    {
        _contacts[_oldestContactIndex].setContact();
        _oldestContactIndex = (_oldestContactIndex + 1) % 8;
    }
}

/*
** Function: searchContact
** Description: Displays the list of contacts and allows the user to view details of
** a specific contact
*/
void    PhoneBook::searchContact() const
{
    if (_contactCount == 0)
    {
        std::cout << "\033[31mNo contacts in the phone book.\033[0m" << std::endl;
        return ;
    }
    std::cout << std::setw(10) << std::right << "\033[32mIndex\033[0m" << "|"
          << std::setw(10) << std::right << "\033[32mFirst Name\033[0m" << "|"
          << std::setw(10) << std::right << "\033[32mLast Name\033[0m" << "|"
          << std::setw(10) << std::right << "\033[32mNickname\033[0m"
          << std::endl;
    for (int i = 0; i < _contactCount; i++)
    {
        std::cout << std::setw(5) << i << "|";
        _contacts[i].displayContactShort();
    }
}
