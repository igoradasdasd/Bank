/*
 * manager.h
 *
 *  Created on: 6 июл. 2024 г.
 *      Author: Игорь
 */

#ifndef INCLUDE_MANAGER_H_
#define INCLUDE_MANAGER_H_

#include <iostream>

#include "../include/person.h"
#include "../include/clientBase.h"

class Manager: public Person
{
	friend std::ostream& operator << (std::ostream &is, Manager& man);
public:
	Manager(std::string, std::string, std::string, std::string);
	~Manager(){};
	std::string getPassword(){return password;};
	std::string getLogin(){return login;};
	bool getHighManager(){return highManger;};
	virtual void work(ClientBase& cl);
private:
//	ClientBase* clBase;
	bool highManger;		//  это истина для старшего менеджера
	std::string password;
	std::string login;
};




#endif /* INCLUDE_MANAGER_H_ */
