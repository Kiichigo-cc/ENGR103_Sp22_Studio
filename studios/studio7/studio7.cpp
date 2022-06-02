#include <iostream>
#include <string>

using namespace std;

int a_to_i(char character);
char i_to_a(int integer);
int string_to_int(string str);

int main() {
  
  char character = 'a';
  int integer = 79;
  string str = "1234";
  cout << a_to_i(character) << endl;
  cout << i_to_a(integer) << endl;
  cout << string_to_int(str) << endl;
  
  return 0;
}

/******************************************************************** 
** Function: a_to_i
** Description: turns a character value into a decimal value 
** Parameters: char character 
** Pre-Conditions: the input is a character 
** Post-Conditions: returned the integer which represents the 
character value 
********************************************************************/ 

int a_to_i(char character) {
  return (int) character;
}

/******************************************************************** 
** Function: i_to_a
** Description: turns a decimal value into a character value 
** Parameters: int decimal 
** Pre-Conditions: the input is an decimal 
** Post-Conditions: returned the character which represents the 
decimal value 
********************************************************************/ 

char i_to_a(int integer) {
  return (char) integer;
}

/******************************************************************** 
** Function: string_to_int
** Description: turns a string value into a decimal value 
** Parameters: a string 
** Pre-Conditions: the input is a string 
** Post-Conditions: returned the integer which represents the 
string value 
********************************************************************/ 

int string_to_int(string str) {
  int number = 0;
  for (int i = 0; i < str.length(); i++) {
    number = number * 10 + (str[i] - '0');
  }
  return number;
}