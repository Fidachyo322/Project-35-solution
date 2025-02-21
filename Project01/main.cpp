#include <iostream>
#include "logic.h"

using namespace std;

double calculate_average_mark(int mark1, int mark2, int mark3, int mark4, int mark5);

int main() {

	int mark1, mark2, mark3, mark4, mark5;

	cout << "Imput your mark: ";
	cin >> mark1 >> mark2 >> mark3;

	double average = calculate_average_mark(mark1,mark2,mark3,mark4,mark5);

	cout << "Students average mark is: " << average << endl;

	return 0;
}