/*
 * personalBase.h
 *
 *  Created on: 12 июл. 2024 г.
 *      Author: Игорь
 */

#ifndef INCLUDE_PERSONALBASE_H_
#define INCLUDE_PERSONALBASE_H_

#include <memory>
#include <fstream>
#include <iostream>

#include "../include/highManager.h"
#include "../include/manager.h"
#include "../include/clientBase.h"

typedef std::map<int, std::shared_ptr<Manager>> PersonalMap;

class PersonalBase final
{
public:
	PersonalBase(std::string, std::string);
	void readFromFile();
	void work(ClientBase& cl);
	void print()
	{
		for (auto i: base)
			std::cout<< *(i.second) << std::endl;
	}
private:
	bool autentication();
	std::string readManagerFile;
	std::string readHighManagerFile;
	PersonalMap::const_iterator it;
	PersonalMap base;

};



#endif /* INCLUDE_PERSONALBASE_H_ */
