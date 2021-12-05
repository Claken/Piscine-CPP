#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:";
	std::cout << this->_accountIndex << ";";
	std::cout << "amount:";
	std::cout << this->_amount << ";";
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	std::cout << "created" << std::endl;
}

Account::~Account( void )
{
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
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
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << Account::_nbDeposits;
	std::cout << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool result;

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal < this->_amount)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << Account::_nbDeposits;
		result = true;
	}
	else
	{
		std::cout << "withdrawal:refused";
		result = false;
	}
	std::cout << std::endl;
	return (result);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	//std::cout << "displayStatus" << std::endl;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "deposits:" << Account::_nbDeposits << ";";
	std::cout << "withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "_displayTimestamp" << std::endl;

}