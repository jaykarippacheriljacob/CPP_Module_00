/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:02:02 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/28 13:28:15 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

/*
** Class: Contact
** Description: Represents an individual contact in the phone book. Contains
** private member variables for storing contact information and public member
** functions for setting and displaying contact details. 
*/
class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
        
    public:
        Contact(void);
        ~Contact(void);
        
        void setContact();
        void displayContact() const;
        void displayContactShort() const;
};

#endif