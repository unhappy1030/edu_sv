#include <iostream>

using namespace std;

int main() {
  string name, reason;
  int age;
  cout << "name: ";
  cin >> name;
  cout << "age: ";
  cin >> age;
  cin.ignore();
  cout << "reason for learning coding: ";
  getline(cin ,reason);
  cout << "\n<자기소개>" << endl;
  cout << "안녕하세요 저는 " << name << "입니다. " << age << "살이고,\n " << reason << endl;
  return 0;
}