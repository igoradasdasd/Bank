/*
 * client.cpp
 *
 *  Created on: 26 июн. 2024 г.
 *      Author: Игорь
 */

#include "../include/client.h"

std::ostream& operator<<(std::ostream& os, Client& client)
{
	os << client.getFirstName()	<< std::endl;
	os << client.getLastName() << std::endl;
	os << client.account.GetMoney() << std::endl;
	return os;
}


