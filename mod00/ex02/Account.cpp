#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{	
	time_t seconds = time(NULL);
	tm *time_now = localtime(&seconds);
	std::cout << "["<< time_now->tm_year + 1900;
   	if (time_now->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << time_now->tm_mon + 1;
	if (time_now->tm_mday < 10)
		std::cout << "0";
   	std::cout << time_now->tm_mday << "_";
	if (time_now->tm_hour < 10)
		std::cout << "0";
	std::cout << time_now->tm_hour;
   if (time_now->tm_min < 10)
		std::cout << "0";
   std::cout << time_now->tm_min;
   if (time_now->tm_sec < 10)
		std::cout << "0";
   std::cout << time_now->tm_sec << "] ";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits = 1;
	std::cout << "index:" << _accountIndex<< ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount + deposit;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:";
		std::cout<< _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	return (true);
}
 
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex <<";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" <<  _accountIndex<< ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}
