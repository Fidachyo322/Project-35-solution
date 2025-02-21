#include "logic.h"
#define students_number 5

double calculate_average_mark(int mark1, int mark2, int mark3, int mark4, int mark5) {
	double s = mark1 + mark2 + mark3 + mark4 + mark5;
	return s / students_number;
}
