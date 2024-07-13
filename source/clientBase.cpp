/*
 * clientBase.cpp
 *
 *  Created on: 29 июн. 2024 г.
 *      Author: Игорь
 */
#include <fstream>
#include <iostream>


#include "../include/clientBase.h"


void ClientBase::readFromFile()
{
	std::fstream in(readFile);
	if (!in)
	{
		std::cout << "Error open file: " << readFile << std::endl;
		return;
	}

	std::string f_n;
	std::string l_n;
	double s;
	while (in)
	{
		in >> f_n;
		in >> l_n;
		in >> s;
		if (in)
		{
			base.insert(
					std::make_pair(f_n+l_n,
							std::make_shared<Client>(Client(f_n, l_n, s))));
		}
	}
	in.close();
}

void ClientBase::writeInFile()
{
	std::fstream out(writeFile, std::ios_base::trunc | std::ios_base::out);
	if (!out)
	{
		std::cout << "Error open file: " << writeFile << std::endl;
		return;
	}

	for (auto i = base.rbegin(); i != base.rend(); ++i )
	{
		out << *(i->second);
	}
	out.close();
}



void ClientBase::printMap()
{
	for (auto i = base.begin(); i != base.end(); ++i)
	{
		std::cout << i->first << std::endl;
		std::cout << *(i->second)  << std::endl;
	}
}

clientMap::iterator ClientBase::find()
{
		std::string f_n;
		std::string l_n;
		std::cout << "Enter first name of client: " ;
		std::cin >> f_n;
		std::cout << std::endl;
		std::cout << "Enter last name of client: " ;
		std::cin >> l_n;
		auto i = base.find(f_n + l_n);
		if (i == base.end())
		{
			std::cout << "Not found a client" << std::endl;
		}
		return i;
}



void ClientBase::editClient()
{
	char repeat('y');
	while(repeat == 'y')
	{
		clientMap::iterator it = find();
		if (it != base.end())
		{
			it->second->editAccount();
		}
		std::cout<< " Enter 'y' to repeat edit client " ;
		std::cin >> repeat;
		std::cout << std::endl;
	}
}

void ClientBase::deleteClient()
{
	char repeat('y');
	while(repeat == 'y')
	{
		clientMap::iterator it = find();
		if (it != base.end())
		{
			base.erase(it);
		}
		std::cout<< " Enter 'y' to repeat delete client " ;
		std::cin >> repeat;
		std::cout << std::endl;
	}
}

void ClientBase::addClient()
{
	std::string f_n;
	std::string l_n;
	double s;
	std::cout << "Enter first name of client: " ;
	std::cin >> f_n;
	std::cout << std::endl;
	std::cout << "Enter last name of client: " ;
	std::cin >> l_n;
	std::cout << "Enter the amount of money: " ;
	std::cin >> s;
	base.insert(
			std::make_pair(f_n+l_n,
					std::make_shared<Client>(Client(f_n, l_n, s))));
}
