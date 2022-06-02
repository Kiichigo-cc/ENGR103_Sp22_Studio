#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));
    
    int play_again;
    int letters;
    int uppercase;
    int upperlength = 0;
    int lowercase;
    int lowerlength = 0;
    int numbers;
    int numberlength = 0;

    do {
    	cout << "Welcome to Password Creator!\n" << endl;
	cout << "In your password..." << endl;
	cout << "Do you want letters? (0-no, 1-yes) ";
	cin >> letters;
	if (letters == 1) {
	    cout << "Do you want uppercase letters? (0-no, 1-yes) ";
	    cin >> uppercase;
	    if (uppercase == 1) {
	    	cout << "How much of the password should be uppercase? ";
		cin >> upperlength;
	    }
	    cout << "Do you want lowercase letters? (0-no, 1-yes) ";
	    cin >> lowercase;
	    if (lowercase == 1) {
	    	cout << "How much of the password should be lowercase? ";
		cin >> lowerlength;
	    }
	}
	cout << "Do you want numbers? (0-no, 1-yes) ";
	cin >> numbers;
	if (numbers == 1) {
	    cout << "How much of the password should be numbers? ";
	    cin >> numberlength;
	}

	/*Print out the password*/
	cout << "Your password is: ";
	for (int i = 0; i < upperlength; i++) {
	    cout << (char) (rand() % 26 + 65);
	}
	for (int i = 0; i < lowerlength; i++) {
	    cout << (char) (rand() % 26 + 97);
	}
	for (int i = 0; i < numberlength; i++) {
	    cout << (char) (rand() % 10 + 48);
	}
	cout << "." << endl;
	cout << "Would you like to create a new password? (0-no, 1-yes) ";
	cin >> play_again;

    } while (play_again == 1);

   return 0; 
}
