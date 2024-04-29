/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:38:08 by fede              #+#    #+#             */
/*   Updated: 2024/04/29 19:14:37 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"

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
	return _totalAmount;
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

/* int Account::displayAccountsInfos(void)
{
	return ;
} */