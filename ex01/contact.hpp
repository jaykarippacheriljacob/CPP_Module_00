/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:02:02 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/22 15:05:23 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class contact
{
    public:
        contact();
        ~contact();
        
        void setContact();
        void displayContactSummary() const;
        void displayFull() const;
};

#endif