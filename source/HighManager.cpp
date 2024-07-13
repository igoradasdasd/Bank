/*
 * HighManager.cpp
 *
 *  Created on: 12 июл. 2024 г.
 *      Author: Игорь
 */

#include "../include/HighManager.h"

void HighManager::work(ClientBase& cl)
{
	int action;
	char repeat;

	do
	{
		std::cout << "Select action: " << std::endl;
		std::cout << "1 - edit client" << std::endl;
		std::cout << "2 - add client" << std::endl;
		std::cout << "3 - delete client" << std::endl;
		std::cin >> action;

		switch(action)
		{
		case 1:
			cl.editClient();
			break;
		case 2:
			cl.addClient();
			break;
		case 3:
			cl.deleteClient();
			break;
		default:
			std::cout << "Error command" << std::endl;
		}
		std::cout<< " Enter 'y' to repeat select action " ;
		std::cin >> repeat;
		std::cout << std::endl;
	} while(repeat == 'y');

}


