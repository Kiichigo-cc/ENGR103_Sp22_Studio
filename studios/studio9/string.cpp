#include <string>
#include <iostream>

using namespace std;

void get_string(string &str_to_store); 
void set_replace_string(string copy_str, string &dash_str); 
int get_search_replace(char c, string copy_str, string &dash_str); 

int main() {
  string copy_string;
  string dash_string;
  char c;
  cout << "Enter your string: ";
  get_string(copy_string);
  set_replace_string(copy_string, dash_string);
  cout << dash_string << endl;
  cout << "Enter a letter to search for: ";
  cin >> c;
  cout << "We found " << get_search_replace(c, copy_string, dash_string) << " instances of " << c << " in your string." << endl;
  cout << dash_string << endl;
  return 0;
}

void get_string(string &str_to_store) {
  string string_input;
  getline(cin, string_input);
  str_to_store = string_input;
}

void set_replace_string(string copy_str, string &dash_str) {
  dash_str = copy_str;
  for (int i = 0; i < copy_str.length(); i++) {
    if (dash_str[i] >= 'a' && dash_str[i] <= 'z') {
      dash_str[i] = '-';
    }
  }
}

int get_search_replace(char c, string copy_str, string &dash_str) {
  int letter_count = 0;
  for (int i = 0; i < copy_str.length(); i++) {
    if (copy_str[i] == c) {
      dash_str[i] = c;
      letter_count++;
    }
  }
  return letter_count;
}