/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:48:56 by jkarippa          #+#    #+#             */
/*   Updated: 2026/02/28 18:35:59 by jkarippa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

/*
** Static member variable initialization: for Account class 
*/
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*
** Constructor: for Account class 
*/
Account::Account(int initial_deposit)
{
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    Account::_totalAmount = initial_deposit;
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
}

/*
** Destructor: for Account class  
*/
Account::~Account(void)
{
    
}

/*
** Function: getNbAccounts
** Description: returns the total number of accounts 
*/
int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

/*
** Function: getTotalAmount
** Description: returns the total amount of all accounts combined 
*/
int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

/*
** Function: getNbDeposits
** Description: returns the total number of deposits made across all accounts 
*/
int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

/*
** Function: getNbWithdrawals
** Description: returns the total number of withdrawals made across all accounts 
*/
int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}
/*
** Function: displayAccountsInfos
** Description: displays the overall information about all accounts, including the total number of
** accounts, total amount, total number of deposits, and total number of withdrawals. The output
** is formatted as follows: [timestamp] accounts:8;total:21524;deposits:5; 
*/
void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();

    std::cout << "accounts:"     << Account::getNbAccounts()
              << ";total:"       << Account::getTotalAmount()
              << ";deposits:"    << Account::getNbDeposits()
              << ";withdrawals:" << Account::getNbWithdrawals()
              << std::endl;
}
