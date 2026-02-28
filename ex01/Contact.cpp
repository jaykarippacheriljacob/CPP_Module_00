/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:01:53 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/28 13:11:40 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
** Wrapper function: truncateField 
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

/*
** Wrapper function: getNonEmptyInput
** Description: Prompts the user to enter contact information and stores it in the
** contact's private member variables. 
*/
static std::string getNonEmptyInput(const std::string& prompt)
{
    std::string input;
    do {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "\033[31mInput cannot be empty. Please try again.\033[0m" << std::endl;
    } while (input.empty());
    return input;
}

/*
** Function: setContact
** Description: Prompts the user to enter contact information and stores it in the
** contact's private member variables.
*/
void Contact::setContact()
{
    _firstName = getNonEmptyInput("Enter first name: ");
    _lastName = getNonEmptyInput("Enter last name: ");
    _nickname = getNonEmptyInput("Enter nickname: ");
    _phoneNumber = getNonEmptyInput("Enter phone number: ");
    _darkestSecret = getNonEmptyInput("Enter darkest secret: ");
}

/*
** Function: displayContact
** Description: Displays the full details of the contact. 
*/
void Contact::displayContact() const
{
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone Number: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}
