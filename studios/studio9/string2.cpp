#include <cstring>
#include <iostream>

using namespace std;

void get_string(char str_to_store[]); 
void set_replace_string(char copy_str[], char dash_str[]); 
int get_search_replace(char c, char copy_str[], char dash_str[]);

int main() {
  char copy_string[256];
  char dash_string[256];
  char c;
  cout << "Enter your string: ";
  get_string(copy_string);
  set_replace_string(copy_string, dash_string);
  cout << "Enter a letter to search for: ";
  cin >> c;
  cout << "We found " << get_search_replace(c, copy_string, dash_string) << " instances of " << c << " in your string." << endl;
  return 0;
}

void get_string(char str_to_store[]) {
  char string_input[256];
  cin.getline(string_input, 255);
  strcpy(str_to_store, string_input);
}

void set_replace_string(char copy_str[], char dash_str[]) {
  strcpy(dash_str, copy_str);
  for (int i = 0; i < strlen(copy_str); i++) {
    if (dash_str[i] >= 'a' && dash_str[i] <= 'z') {
      dash_str[i] = '-';
    }
  }
}

int get_search_replace(char c, char copy_str[], char dash_str[]) {
  int letter_count = 0;
  for (int i = 0; i < strlen(copy_str); i++) {
    if (copy_str[i] == c) {
      dash_str[i] = c;
      letter_count++;
    }
  }
  return letter_count;
}