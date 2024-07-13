/*
 * main.cpp
 *
 *  Created on: 24 июн. 2024 г.
 *      Author: Игорь
 */
#include <iostream>
#include <fstream>

#include "./include/client.h"
#include "./include/clientBase.h"
#include "./include/list_of_files.h"
#include "./include/manager.h"
#include "./include/highManager.h"
#include "./include/personalBase.h"

int main(void)
{
	PersonalBase pB("." + managerFile, "." + highMagerFile);
	pB.readFromFile();
	pB.print();
	ClientBase cB("." + clientFile, "." + clientFile);
	cB.readFromFile();

	pB.work(cB);
	/*
	HighManager M("m", "n", "m1", "n1");
	M.work(cB);
*/
	cB.writeInFile();
	cB.printMap();
}

