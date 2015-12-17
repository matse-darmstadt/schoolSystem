#include <sys/types.h>
#include <iostream>
#include <vector>

#include "Lecture.h"
#include "Teacher.h"

//============================================================================
// Name        : SchoolSystem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

using namespace std;

template<typename T>
class vec {
public:
	T* array;
	uint numberOfTeachersInArray;
	uint sizeOfArray;

	void push_back(T t) {

		if (numberOfTeachersInArray >= sizeOfArray) {
			Teacher* tmp = array;
			array = new T[numberOfTeachersInArray + 1];
			memcpy(array, tmp, numberOfTeachersInArray);
		}

		array[numberOfTeachersInArray] = t;
		numberOfTeachersInArray++;
	}
};

int main() {

	Teacher t1(true, "hans", "müller", 123, 0.1, "Prof. Dr. Dr.");
	Lecture l1(&t1, "asdf");

	std::vector<Teacher> vector;
	vector.push_back(t1);

	cout << &t1 << endl;
	cout << &vector[0] << endl;

	return 0;
}

