/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:01:19 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/28 17:12:46 by jkarippa         ###   ########.fr       */
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
** Wrapper function: checkdisplayContact
** Description: Validates the user input for selecting a contact index and displays
** the full details of the selected contact if the input is valid. 
*/
static void checkdisplayContact(const std::string& input, const Contact contacts[8], int contactCount)
{
    int index;

    if (input.length() != 1 || !std::isdigit(input[0]))
        std::cout << "Invalid index." << std::endl;
    else
    {
        index = input[0] - '0';
        if (index < 1 || index > contactCount)
            std::cout << "\033[31mInvalid index.\033[0m" << std::endl;
        else
            contacts[index - 1].displayContact();
    }
}

/*
** Function: searchContact
** Description: Displays the list of contacts and allows the user to view details of
** a specific contact
*/
void    PhoneBook::searchContact() const
{
    std::string input;
    
    if (_contactCount == 0)
    {
        std::cout << "\033[31mNo contacts in the phone book.\033[0m" << std::endl;
        return ;
    }
    std::cout << std::setw(10) << std::right << "\033[32mIndex\033[0m" << "|"
          << std::setw(10) << std::right << "\033[32mFirst Name\033[0m" << "|"
          << std::setw(10) << std::right << "\033[32m Last Name\033[0m" << "|"
          << std::setw(10) << std::right << "\033[32m  Nickname\033[0m"
          << std::endl;
    for (int i = 0; i < _contactCount; i++)
    {
        std::cout << std::setw(5) << i + 1 << "|";
        _contacts[i].displayContactShort();
    }
    std::cout << "Enter the index of the contact to view full details: ";
    std::getline(std::cin, input);
    checkdisplayContact(input, _contacts, _contactCount);
}
