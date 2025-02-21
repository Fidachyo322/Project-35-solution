#include "logic.h"
#define students_number 3

double calculate_average_mark(int mark1, int mark2, int mark3) {
	double s = mark1 + mark2 + mark3;
	return s / students_number;
}
