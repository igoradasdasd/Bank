/*
 * person.h
 *
 *  Created on: 24 июн. 2024 г.
 *      Author: Игорь
 */

#ifndef INCLUDE_PERSON_H_
#define INCLUDE_PERSON_H_

#include <string>
#include <iostream>

using std::string;

class Person
{

public:
	~Person(){};
	string getFirstName()	{return firstName;}
	string getLastName()	{return lastName;}
	void setFirstName(std::string in) { firstName = in;}
	void setLastName(std::string in ) { lastName = in;}
protected:
	Person(const string& f_n, const string&  l_n): firstName(f_n), lastName(l_n){};
private:
	string firstName;
	string lastName;
};

#endif /* INCLUDE_PERSON_H_ */
