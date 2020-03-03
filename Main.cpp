#include "Student.h"

int main() {
	const int size = 50;
	Student * studentsArr = new Student[size];
	for (int i = 0; i < size; i++) {
		studentsArr[i].name = "";
		studentsArr[i].id = 0;
		studentsArr[i].gpa = 0.0;
	}
	inflateGPAs(studentsArr, size);
	// print out to check
	for (int i = 0; i < size; i++) {
		cout << studentsArr[i].gpa << endl;
	}
}
