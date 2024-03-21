#include <iostream>

using namespace std;

void pass_by_reference(string &my_string) {
    cout << my_string << "\n";
    my_string += " This is the new part!";
    cout << my_string << "\n";
}

void pass_by_value(string my_string) {
    cout << my_string << "\n";
    my_string += " This is the new part!";
    cout << my_string << "\n";
}

int main() {
  string my_string = " This is a string";
  cout << my_string << endl;
  pass_by_value(my_string);
  cout << my_string << endl;
  pass_by_reference(my_string);
  cout << my_string << endl;
  return 0;
}