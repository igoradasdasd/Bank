/*
 * main.cpp
 *
 *  Created on: 24 июн. 2024 г.
 *      Author: Игорь
 */
#include <iostream>
#include <fstream>

#include "./include/client.h"
#include "./include/list_of_files.h"

int main(void)
{
	std::ofstream clientStreamFile("." + clientFile, std::ios::in	);
//	std::cout << clientFile << std::endl;
	Client client("sdfsd", "sdfasdf", 100);
	client.editAccount();
}

