/*
 * Subject.h
 *
 *  Created on: 08.12.2015
 *      Author: nhof
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <string>

class Subject {
private:
	std::string subjectName;

public:
	Subject(std::string subjectName):
		subjectName(subjectName){

	}
	virtual ~Subject();
};

#endif /* SUBJECT_H_ */
