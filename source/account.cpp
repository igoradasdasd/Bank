/*
 * Account.cpp
 *
 *  Created on: 25 июн. 2024 г.
 *      Author: Игорь
 */

#include <iostream>
#include "../include/account.h"

void Account::ChangeMoney()
{
	int i;
	char repeat = 'n';
	do
	{
		std::cout << "Select action: 0 - deposit money; 1 - withdraw money; 2 - show money  ";
		std::cin >> i;
		switch (i)
		{
		case 0:
			depositMoney();
			break;
		case 1:
			withdrawMoney();
			break;
		case 2:
			showMoney();
			break;
		default:
			std::cout << "there is no such command" << std::endl;
			break;
		}
		std::cout << "enter 'y' to repeat select command" << std::endl;
		std::cin >> repeat;
	} while (repeat == 'y');
}

void Account::depositMoney()
{
	double in;
	std::cout << "Enter the amount to be deposit: ";
	std::cin >> in;
	std::cout << std::endl;
	money += in;
}

void Account::withdrawMoney()
{
	double in;
	std::cout << "Enter the amount to withdraw: ";
	std::cin >> in;
	std::cout << std::endl;
	if (in > money)
	{
		std::cout << "The amount on the account is less than the request amount" << std::endl;
	}
	else
		money -= in;
}

void Account::showMoney() const
{
	std::cout << "The money in the account " << money << std::endl;
}




