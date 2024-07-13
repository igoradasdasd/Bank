/*
 * manager.cpp
 *
 *  Created on: 6 июл. 2024 г.
 *      Author: Игорь
 */

#include "../include/manager.h"

Manager::Manager(std::string pass, std::string log, std::string fn, std::string ln):
		Person(fn, ln), password(pass), login(log){highManger = false;};

void Manager::work(ClientBase& cl)
{
	cl.editClient();
}

std::ostream& operator << (std::ostream &os, Manager& man)
{
	os << man.getFirstName();
	os << man.getLastName();
	os << man.getLogin();
	os << man.getPassword();
	return os;
}
