/*
 * Lecture.h
 *
 *  Created on: 08.12.2015
 *      Author: nhof
 */

#ifndef LECTURE_H_
#define LECTURE_H_

#include <string>

class Teacher;

class Lecture {
private:
	Teacher* teachers;
	std::string lectureSubject;

public:
	Lecture(Teacher* teachers, std::string lectureSubject):
		teachers(teachers), lectureSubject(lectureSubject){

	}
	virtual ~Lecture() {}
};

#endif /* LECTURE_H_ */
