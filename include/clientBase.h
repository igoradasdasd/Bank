/*
 * clientBase.h
 *
 *  Created on: 29 июн. 2024 г.
 *      Author: Игорь
 */

#ifndef INCLUDE_CLIENTBASE_H_
#define INCLUDE_CLIENTBASE_H_

#include <map>
#include <memory>

#include "../include/client.h"

typedef std::map< std::string, std::shared_ptr<Client> > clientMap;

class ClientBase final
{
public:
	ClientBase(std::string rFile, std::string wFile): readFile(rFile), writeFile(wFile){}
	~ClientBase() = default;
//	void managerFunctions();
//	void highMangerFunctions();
	void addClient();
	void deleteClient();
	void editClient();
	void readFromFile();
	void writeInFile();
	void printMap();
private:
	// first = firstName+secondName
	clientMap base;
	std::string readFile;
	std::string writeFile;

	clientMap::iterator find();
};



#endif /* INCLUDE_CLIENTBASE_H_ */
