#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	std::cout << "Destructor Account called" << std::endl;
	this->_nbDeposits = initial_deposit;
}

Account::~Account( void )
{
	std::cout << "Destructor Account called" << std::endl;
}

int		Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int 	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int 	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int 	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void 	Account::displayAccountsInfos( void )
{
	std::cout << "displayAccountsInfos" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	(void)deposit;
	std::cout << "makeDeposit" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	std::cout << "makeWithdrawal" << std::endl;
	return (0);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "displayStatus" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "_displayTimestamp" << std::endl;
}