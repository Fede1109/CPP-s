/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:38:08 by fede              #+#    #+#             */
/*   Updated: 2024/05/06 18:51:24 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "./Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
    return _nbAccounts;
}
int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

Account::Account( int initial_deposit ): _amount(initial_deposit)
{
    this->_accountIndex = _nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_nbAccounts++;
    _totalAmount += this->_amount;
    std::cout << "index:" << this->_accountIndex << ";"
    			<< "amount:" << this->_amount << ";"
    			<< "created" << std::endl;
};

Account::~Account( void )
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
};


bool	Account::makeWithdrawal( int withdrawal )
{
	//TODO: tiempo
	std::cout << "index:" << this->_accountIndex << ";"
    			<< "p_amount:" << this->_amount << ";"
				<< "withdrawal:";
    if (this->_amount - withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << "amount:" << this->_amount << ";"
    				<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}

void    Account::makeDeposit( int deposit ) {
	//TODO:tiempo
    this->_nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << this->_accountIndex << ";"
                << "p_amount:" << this->_amount << ";";
    this->_amount += deposit;
    std::cout << "deposit:" << deposit << ";"
                << "amount:" << this->_amount << ";"
                << "nb_deposit:" << this->_nbDeposits << std::endl;
}

void    Account::displayAccountsInfos( void ) {
	//TODO. tiempo
    std::cout << "accounts:" << getNbAccounts() << ";"
                << "total:" << getTotalAmount() << ";"
                << "deposits:" << getNbDeposits() << ";"
                << "withdrawals:" << getNbWithdrawals() << std::endl;
}

int     Account::checkAmount( void ) const {
    return _amount;
}

void	Account::displayStatus( void ) const
{
	//TODO. tiempo
		std::cout <<  "index:" <<  _accountIndex <<
                        ";amount:" << _amount <<
						";deposits:" << _nbDeposits <<
						";withdrawals:" << _nbWithdrawals
						<< std::endl;
}