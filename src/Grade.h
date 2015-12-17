/*
 * Grade.h
 *
 *  Created on: 08.12.2015
 *      Author: nhof
 */

#ifndef GRADE_H_
#define GRADE_H_

class Grade {
private:
	Lecture* lectures;
public:
	Grade(Lecture* lectures) :
			lectures(lectures) {
	}
	virtual ~Grade();
};

#endif /* GRADE_H_ */
