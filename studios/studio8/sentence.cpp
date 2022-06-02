#include <iostream>
#include <string>

using namespace std;

void get_sentence(string&);

int main() {
  string sentence;
  
  get_sentence(sentence);
  cout << sentence << endl;
  
  return 0;
}

/*******************************************************************
** Function: get_sentence()
** Description: Converts a string into an integer
** Parameters: string num, int& value
** Pre-conditions: The input is a string type
** Post-conditions: The string is changed to what the getline was
*******************************************************************/
void get_sentence(string &s) {
  getline(cin, s);
}
