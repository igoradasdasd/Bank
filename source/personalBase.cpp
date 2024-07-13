/*
 * personalBase.cpp
 *
 *  Created on: 13 июл. 2024 г.
 *      Author: Игорь
 */


#include "../include/personalBase.h"

PersonalBase::PersonalBase(std::string manager, std::string highManager):
	readManagerFile(manager), readHighManagerFile(highManager), it(nullptr){};

void PersonalBase::readFromFile()
{
	std::fstream in(readManagerFile);
	if (!in)
	{
		std::cout << "Error open file: " << readManagerFile << std::endl;
		return;
	}
	int id;
	std::string ln, fn, pass, log;
	while (in)
	{
		in >> id;
		in >> ln;
		in >> fn;
		in >> pass;
		in >> log;
		if (in)
		{
			base.insert(std::make_pair(id, std::make_shared<Manager>(Manager(pass, log, fn, ln))));
		}
	}
	in.close();

	std::fstream in1(readHighManagerFile);
	if (!in1)
	{
		std::cout << "Error open file: " << readManagerFile << std::endl;
		return;
	}

	while (in1)
	{
		in1 >> id;
		in1 >> ln;
		in1 >> fn;
		in1 >> pass;
		in1 >> log;
		if (in1)
		{
			base.insert(std::make_pair(id, std::make_shared<HighManager>(HighManager(pass, log, fn, ln))));
		}
	}
	in1.close();
}

void PersonalBase::work(ClientBase& cl)
{
	if (!autentication())
		return;
	it->second->work(cl);
}

bool PersonalBase::autentication()
{
	bool ret(false);
	std::string log, pass;
	char repeat('y');
	while(repeat == 'y')
	{
		int in_id;
		std::cout << "Enter your id: ";
		std::cin >> in_id;
		std::cout << std::endl;
		auto i = base.find(in_id);
		if (i == base.end())
		{
			std::cout << "No find id " << std::endl;
		}
		else
		{
			std::cout << "Enter your login: ";
			std::cin >> log;
			std::cout << std::endl;

			std::cout << "Enter your pass: ";
			std::cin >> pass;
			std::cout << std::endl;

			if (log == i->second->getLogin() && pass == i->second->getPassword())
			{
				ret = true;
				it = i;
				break;
			}

		}
		std::cout<< " Enter 'y' to repeat autentication " ;
		std::cin >> repeat;
		std::cout << std::endl;
	}
	return ret;
}

