/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:42:36 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/23 20:01:12 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            phoneBook.addContact();
            std::cout << "Adding a new contact..." << std::endl;
        }
        else if (command == "SEARCH")
        {
            //phoneBook.searchContact();
            std::cout << "Searching for a contact..." << std::endl;
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting the program." << std::endl;
            break;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return 0;
}