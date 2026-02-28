/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:42:36 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/28 16:54:33 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD(A), SEARCH(S), EXIT(E)): ";
        std::getline(std::cin, command);

        if (command == "ADD" || command == "A")
        {
            phoneBook.addContact();
            std::cout << "Adding a new contact..." << std::endl;
        }
        else if (command == "SEARCH" || command == "S")
        {
            std::cout << "Searching for a contact..." << std::endl;
            phoneBook.searchContact();
        }
        else if (command == "EXIT" || command == "E")
        {
            std::cout << "Exiting the program." << std::endl;
            break;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return 0;
}
