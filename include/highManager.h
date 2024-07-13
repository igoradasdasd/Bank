/*
 * highManager.h
 *
 *  Created on: 12 июл. 2024 г.
 *      Author: Игорь
 */

#ifndef INCLUDE_HIGHMANAGER_H_
#define INCLUDE_HIGHMANAGER_H_

#include "../include/manager.h"

class HighManager final: public Manager
{
public:
	HighManager(std::string pass, std::string log, std::string fn, std::string ln):
		Manager(pass, log, fn, ln){};
	void work(ClientBase& cl) override;
};



#endif /* INCLUDE_HIGHMANAGER_H_ */
