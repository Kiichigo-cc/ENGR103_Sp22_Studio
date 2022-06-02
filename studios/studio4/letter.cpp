#include <iostream>

using namespace std;

int main() { 
	
   char letter;

   cout << "Enter your letter: ";
   cin >> letter;

   if (letter >= 65 && letter <= 90) { 
   	cout << "I'M A CAPITAL LETTER!" << endl;
   }
   else if (letter >= 97 && letter <= 122) { 
   	cout << "i'm a lowercase letter." << endl;
   }
   return 0;
}
