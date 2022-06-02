#include <iostream>

using namespace std;

int main() {
	int x = 0;
	cout << "Enter integer: ";
	cin >> x;

	switch(x % 2) {
	    	case 0:
			cout << "I'm an even number!" << endl; 
			break;
		case 1:
			cout << "I'm an odd number!" << endl;
			break;
	}
	return 0;
}
