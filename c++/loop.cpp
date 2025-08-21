#include <iostream>
#include <cstdio>
using namespace std;
#include <typeinfo>

int main() {
    // Complete the code.
    string num[] = {"one", "two", "three", "four"};

    string start;
    string end;
    getline(cin, start);
    getline(cin, end);

    // string to int
    int start_int = stoi(start);
    int end_int = stoi(end);

    // verifies datatype id of data
    // cout << typeid(start_int).name() << endl; 

    // gets the length of the array
    int arr_len = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < arr_len; ++i) {
      /* 
      catch zero code
      */
      if (i == start_int)
      // cout << num[i - 1] << endl;
      for (int j = i; j <= end_int; ++j) {
        if (j > arr_len && j % 2 == 0) {
          cout << "even" << endl;
        } else if (j > arr_len && j % 2 != 0) {
          cout << "odd" << endl;
        } else {
          cout << num[j - 1] << endl;
        }
      }
    }


    // Find start in array
    // cout << num[0] << endl;
    // for (int i = 0; i < sizeof(num); ++i) {
    //   cout << num[i] << endl;
    // }

    // Find end in array

    // cout << start << endl;
    // cout << end << endl;

    // for (int i = 0; i <= 9; ++i)
    // {
    //   cout << i << endl;
    // }
    return 0;
}
