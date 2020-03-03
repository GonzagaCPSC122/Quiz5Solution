#include "Student.h"

void inflateGPAs(Student * arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i].gpa += 0.1;
		if (arr[i].gpa > 4.0) {
			arr[i].gpa = 4.0;
		}
	}
}
