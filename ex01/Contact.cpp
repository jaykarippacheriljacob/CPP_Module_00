/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:01:53 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/23 20:58:53 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*
** Helper function: truncateField 
** Description: To print shortened field with truncation if the field
** is longer than 10 characters. 
*/
static std::string truncateField(const std::string& field)
{
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}

/*
** Function: Contact constructor
** Description: Initializes a contact with default values. 
*/
Contact::Contact(void)
{
    return ;
}

/*
** Function: Contact destructor
** Description: Cleans up any resources used by the contact. 
*/
Contact::~Contact(void)
{
    return ;
}

/*
** Function: displayContactShort
** Description: Displays a short summary of the contact's information
** used for listing contacts in the phone book. 
*/
void Contact::displayContactShort() const
{
    std::cout << std::setw(10) << std::right << truncateField(_firstName) << "|"
              << std::setw(10) << std::right << truncateField(_lastName) << "|"
              << std::setw(10) << std::right << truncateField(_nickname) << std::endl;
}
