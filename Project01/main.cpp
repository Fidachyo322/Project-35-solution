#include <iostream>
#include "logic.h"

using namespace std;

int main() {

	int mark1, mark2, mark3;

	cout << "Imput your mark: ";
	cin >> mark1 >> mark2 >> mark3;

	double average = calculate_average_mark(mark1,mark2,mark3);

	cout << "Students average mark is: " << average << endl;

	return 0;
}