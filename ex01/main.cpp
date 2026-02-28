/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:42:36 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/28 17:27:02 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "\033[34mEnter a command (ADD(A), SEARCH(S), EXIT(E)): \033[0m";
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
            std::cout << "\033[34mExiting the program.\033[0m" << std::endl;
            break;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return 0;
}

// #include <sstream>
// #include <string>
// int main()
// {
//     PhoneBook phoneBook;

//     // Prepare 8 hardcoded contacts as if typed by the user
//     std::string allContacts =
//         "Alice\nSmith\nAlly\n111-111-1111\nLoves cake\n"
//         "Bob\nJohnson\nBobby\n222-222-2222\nAfraid of heights\n"
//         "Charlie\nWilliams\nChuck\n333-333-3333\nSecret gamer\n"
//         "David\nBrown\nDave\n444-444-4444\nSleeps a lot\n"
//         "Eve\nJones\nEvie\n555-555-5555\nCollects coins\n"
//         "Frank\nGarcia\nFranky\n666-666-6666\nHates broccoli\n"
//         "Grace\nMartinez\nGracie\n777-777-7777\nSings in shower\n"
//         "Hannah\nDavis\nHanny\n888-888-8888\nCan juggle\n";

//     // Redirect std::cin to read from our string
//     std::istringstream input(allContacts);
//     std::streambuf *cinBackup = std::cin.rdbuf(); // backup original cin
//     std::cin.rdbuf(input.rdbuf());

//     // Add 8 contacts
//     for (int i = 0; i < 8; i++)
//         phoneBook.addContact();

//     // Restore original cin
//     std::cin.rdbuf(cinBackup);

//     std::string command;
//     while (true)
//     {
//         std::cout << "\033[34mEnter a command (ADD(A), SEARCH(S), EXIT(E)): \033[0m";
//         std::getline(std::cin, command);

//         if (command == "ADD" || command == "A")
//         {
//             phoneBook.addContact(); // now uses normal user input
//         }
//         else if (command == "SEARCH" || command == "S")
//         {
//             phoneBook.searchContact();
//         }
//         else if (command == "EXIT" || command == "E")
//         {
//             std::cout << "\033[34mExiting the program.\033[0m" << std::endl;
//             break;
//         }
//         else
//         {
//             std::cout << "Invalid command. Please try again." << std::endl;
//         }
//     }

//     return 0;
// }
