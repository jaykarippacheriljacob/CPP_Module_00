/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:01:19 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/23 20:04:14 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

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