#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct student {
  unsigned int id;
  string name;
  string major;
  float gpa;
};

void populate_student_db_info(student std_arr[], int n, ifstream & fin);

int main() {
  student students[50];
  ifstream fin;
  
  fin.open("input.txt");
  if (!fin.is_open()) {
    cout << "File not found" << endl;
    return 1;
  }
  
  int num_students;
  fin >> num_students;
  
  populate_student_db_info(students, num_students, fin);
  fin.close();
  
  float highest = 0.00;
  string best_student = "";
  for (int i = 0; i < num_students; i++) {
    if (students[i].gpa > highest) {
      highest = students[i].gpa;
      best_student = students[i].name;
    }
  }
  
  float average = 0.00;
  for (int i = 0; i < num_students; i++) {
    average += students[i].gpa;
  }
  average /= num_students;
  
  int cs_majors = 0;
  for (int i = 0; i < num_students; i++) {
    if (students[i].major == "CS") {
      cs_majors++;
    }
  }
  
  ofstream fout;
  fout.open("output.txt");
  if (!fout.is_open()){
  	cout << "Error, unable to open the file!" << endl;
  	return 1;
  }
  
  fout << "STUDENT WITH THE HIGHEST GPA: " << best_student << endl;
  fout << "AVERAGE GPA AMONG ALL " << num_students << " STUDENTS: " << average << endl;
  fout << "NUMBER OF STUDENTS MAJOR IN CS: " << cs_majors << endl;
  fout.close();
  
  return 0;
}

void populate_student_db_info(student std_arr[], int n, ifstream & fin) {
  for (int i = 0; i < n; i++) {
    fin >> std_arr[i].id >> std_arr[i].name >> std_arr[i].major >> std_arr[i].gpa;
  }
}
