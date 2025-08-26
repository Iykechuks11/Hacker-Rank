/*
  Write a function int max_of_four(int a, int b, int c, int d) 
  which returns the maximum of the four arguments it receives.
*/

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);
  
  return 0;
}

int max_of_four(int a, int b, int c, int d) {
  // 1 2 3 4
  int nums[] = {a, b, c, d};
  int max = 0;

  int arr_len = sizeof(nums) / sizeof(nums[0]);

  for (int i = 0; i < arr_len; ++i) {
    // e.g: if 0 < 3
    if (max < nums[i]) {
      // 0 <= 3
      // max = 3
      max = nums[i];
      cout << "New max: " << max << endl ;
    } else {
      cout << nums[i] << " is less than " << max << " so max still remains " << max << endl ;
    }
  }

  return 0;
}