/*
 * StandardTeacher.h
 *
 *  Created on: 08.12.2015
 *      Author: nhof
 */

#ifndef STANDARDTEACHER_H_
#define STANDARDTEACHER_H_

#include "Teacher.h"

class StandardTeacher: public Teacher {
private:
	std::string* mySubjects;
public:
	StandardTeacher(bool gender, std::string firstName, std::string lastName,
			long long birthday, float workLoad, std::string title,
			std::string* mySubjects) :
			Teacher(gender, firstName, lastName, birthday, workLoad, title),

			mySubjects(mySubjects) {

	}
	virtual ~StandardTeacher();
};

#endif /* STANDARDTEACHER_H_ */
