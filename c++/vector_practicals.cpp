// The experiments in this file is a reverse array joyous challenge which was 
// successful. 

#include <vector>
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[]) {
  // if (argc < 2) {
  //   cout << "./a.out <enter_value>" << endl;
  // }
  // cout << "Hello " << argv[1] << endl;

  // create a vector
  vector<string> cars;

  cars = {"BMV", "Volvo"};

  // print vector elements
  // for (string car : cars) {
  //   cout << car << endl;
  // }

  // exploring vector functions
  vector<string> courses = {"Mathematics", "Computer science", "Physics"};

  // get the first element
  cout << courses.front() << endl;

  // get the last element
  cout << courses.back() << endl;

  // more functions
  cout << courses.at(2) << endl;

  // change vector elem (!!!!!! not safe !!!!!)
  cars[9] = "Jeep"; // no errors, but 

  // print vector elements
  // for (string car : cars) {
  //   cout << car << endl;
  // }

  // safer option (why: because it performs bounds checking.)
  cars.at(1) = "Jeep";

  // // print vector elements
  // for (string car : cars)
  // {
  //   cout << car << endl;
  // }

  // add elements
  cars.push_back("Tesla");

  for (string car : cars)
  {
    cout << car << endl;
  }

  // remove element
  courses.pop_back();

  // print vector elements
  for (string course : courses)
  {
    cout << course << endl;
  }

  vector<int> num = {1, 9, 3, 4};
  vector<int> reverse(4);
  // cout << num.size() << endl;
  int size_num = num.size();

  // cout << num[3] << endl;

  // for (int n : num) {
  //   // reverse[n] = num[(size_num - 1) - n];
  //   cout << n << endl;
  // }

  for (int n = 0; n < size_num; ++n) {
    reverse[n] = num[(size_num - 1) - n];
  }

  for (int r : reverse) {
    cout << r << " ";
  }
  cout << '\n';

}