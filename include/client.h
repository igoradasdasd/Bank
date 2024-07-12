/*
 * client.h
 *
 *  Created on: 25 июн. 2024 г.
 *      Author: Игорь
 */

#ifndef INCLUDE_CLIENT_H_
#define INCLUDE_CLIENT_H_

#include <iostream>

#include "../include/person.h"
#include "../include/account.h"

class Client: public Person
{
	friend std::ostream& operator<<(std::ostream&, Client&);
public:
	Client(const std::string& f_n, const std::string& l_n, double summ = 0): Person(f_n, l_n),
	account(summ)	{};
	~Client(){};
	void editAccount(){ account.ChangeMoney();}

private:
	Account account;
};

std::ostream& operator<<(std::ostream& , Client&);

#endif /* INCLUDE_CLIENT_H_ */
