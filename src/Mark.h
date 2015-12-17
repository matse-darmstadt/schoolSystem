/*
 * Marks.h
 *
 *  Created on: 08.12.2015
 *      Author: nhof
 */

#ifndef MARK_H_
#define MARK_H_

class Mark {
private:
	bool headMark;
	Lecture& lecture;
public:
	Mark(bool headMark, Lecture& lecture) :
			headMark(headMark), lecture(lecture) {

	}
	virtual ~Mark();
};

#endif /* MARK_H_ */
