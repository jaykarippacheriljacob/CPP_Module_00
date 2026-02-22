/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:01:14 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/22 15:01:15 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook {
    private:
        int _contactCount;
        int _oldestContactIndex;
    public:
        PhoneBook();
        ~PhoneBook();

        void addContact();
        void searchContact() const;
};
#endif