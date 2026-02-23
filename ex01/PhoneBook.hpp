/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:01:14 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/23 20:15:40 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

/*
** Class: PhoneBook
** Description: Manages a collection of contacts. Allows adding new contacts and
** searching existing ones. 
*/
class PhoneBook {
    private:
        Contact _contacts[8];
        int     _contactCount;
        int     _oldestContactIndex;
        
    public:
        PhoneBook();
        ~PhoneBook();

        void addContact();
        void searchContact() const;
};
#endif