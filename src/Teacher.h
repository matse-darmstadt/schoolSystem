/*
 * Teacher.h
 *
 *  Created on: 08.12.2015
 *      Author: nhof
 */

#ifndef TEACHER_H_
#define TEACHER_H_

#include <string>

#include "Human.h"

class Teacher :public Human{
private:
float workLoad;
std::string title;
public:
	Teacher(bool gender, std::string firstName, std::string lastName, long long birthday, float workLoad,
			std::string title): Human(gender, firstName, lastName, birthday),
		workLoad(workLoad),	title(title){

		}

	virtual ~Teacher() {}
};

#endif /* TEACHER_H_ */
