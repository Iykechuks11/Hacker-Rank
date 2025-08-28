#include <iostream>
using namespace std;

int main() {
  int n;
  // input: size of arr
  scanf("%d", &n);

  int arr[n];
  int reverse[n];

  int num_elem_arr = sizeof(arr) / sizeof(arr[0]);

  // cout << num_elem_arr << endl;

  for (int i = 0; i < num_elem_arr; ++i) {
    int m;
    scanf("%d", &m);
    arr[i] = m;
  }

  for (int i = 0; i < num_elem_arr; ++i) {
    reverse[(num_elem_arr - 1) - i] = arr[i];
  }

  for (int i = 0; i < num_elem_arr; ++i) {
    cout << reverse[i] << ' ';
  }
  cout << '\n';

  // input: numbers into array. e.g 4 5 6 7

  // return: reverse of input. e.g 7 6 5 4
}