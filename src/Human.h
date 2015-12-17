/*
 * Human.h
 *
 *  Created on: 08.12.2015
 *      Author: nhof
 */

#ifndef HUMAN_H_
#define HUMAN_H_

#include <string>

class Human {
private:
	bool gender;
	std::string firstName;
	std::string lastName;
	long long birthday;

public:
	Human(bool gender, std::string firstName, std::string lastName, long long birthday):
	gender(gender), firstName(firstName), lastName(lastName), birthday(birthday){

	}

	virtual ~Human() {}
};

#endif /* HUMAN_H_ */
