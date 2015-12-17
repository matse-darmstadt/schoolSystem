/*
 * SupportTeacher.h
 *
 *  Created on: 08.12.2015
 *      Author: nhof
 */

#ifndef SUPPORTTEACHER_H_
#define SUPPORTTEACHER_H_

#include <string>

#include "Teacher.h"

class SupportTeacher :public Teacher {
public:
	SupportTeacher(bool gender, std::string firstName, std::string lastName, long long birthday,
			float workLoad, std::string title):
			Teacher(gender, firstName, lastName, birthday, workLoad, title){

	}
	virtual ~SupportTeacher();
};

#endif /* SUPPORTTEACHER_H_ */
