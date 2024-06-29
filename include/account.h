/*
 * Account.h
 *
 *  Created on: 25 июн. 2024 г.
 *      Author: Игорь
 */

#ifndef INCLUDE_ACCOUNT_H_
#define INCLUDE_ACCOUNT_H_

class Account
{
public:
	Account(double in): money(in){}
	void ChangeMoney();
	double GetMoney(){return money;};
private:
	void depositMoney();
	void withdrawMoney();
	void showMoney() const;
	double money;
};



#endif /* INCLUDE_ACCOUNT_H_ */
