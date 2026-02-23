/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:01:19 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/23 20:14:45 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

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
