#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

struct Student {
	int id;
	string name;
	double gpa;
};

void inflateGPAs(Student *, int);

#endif
