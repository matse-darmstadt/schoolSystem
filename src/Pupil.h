/*
 * Pupil.h
 *
 *  Created on: 08.12.2015
 *      Author: nhof
 */

#ifndef PUPIL_H_
#define PUPIL_H_

#include <string>

#include "Human.h"
#include "Mark.h"

class Pupil: public Human {
private:
	Mark* marks;

	int attendance;

public:
	Pupil(bool gender, std::string firstName, std::string lastName,
			long long birthday, Mark* marks, int attendance) :
			Human(gender, firstName, lastName, birthday), gender(gender), firstName(
					firstName), lastName(lastName), birthday(birthday), marks(
					marks), attendance(attendance) {

	}
	virtual ~Pupil();
};

#endif /* PUPIL_H_ */
