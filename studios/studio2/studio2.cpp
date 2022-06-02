#include <iostream>

using namespace std;

int main() {
	
	double mpg;

	cout << "Enter the miles per gallon (MPG) of your car: ";
	cin >> mpg;

	cout << "Gallons of gas used over 100,000 mile lifetime: " << 100000 / mpg << endl;
	cout << "If gas costs $2.50 per gallon, you will spend: $" << 100000 / mpg * 2.5 << endl;
	cout << "If gas costs $4.50 per gallon, you will spend: $" << 100000 / mpg * 4.5 << endl;

	return 0;
}
