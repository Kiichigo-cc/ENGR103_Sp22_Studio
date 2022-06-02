#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int bytes;
	
	cout << "Enter the amount of bytes you want calculated: ";
	cin >> bytes;

  int max_signed = (pow(2,bytes * 8 - 1) - 1);
 	int min_signed = (pow(2,bytes * 8 - 1));
 	unsigned int max_unsigned = (pow(2,bytes * 8) - 1);
 	unsigned int min_unsigned = 0;
   
	cout << fixed << "Maximum signed value: " << max_signed << endl;
	cout << "Minimum signed value: " << min_signed << endl;
	cout << "Maximum unsigned value: " << max_unsigned << endl;
	cout << "Minimum unsigned value: " << min_unsigned << endl;

  cout << "Adding 1 to each value below vvv" << endl;
  
 	cout << "Maximum signed value: " << max_signed + 1 << endl;
	cout << "Minimum signed value: " << min_signed - 1 << endl;
	cout << "Maximum unsigned value: " << max_unsigned + 1 << endl;
	cout << "Minimum unsigned value: " << min_unsigned - 1 << endl;
 
	return 0;
}
