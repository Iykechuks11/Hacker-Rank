// #include <cmath>
// #include <cstdio>
#include <vector>
#include <iostream>
// #include <algorithm>
using namespace std;

vector<int> populate_vec();

int main() {
  vector<vector<int>> arr;
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  int q;
  int i;
  int j;

  // receive inputs
  cin >> n >> q;

  for (int i = 0; i < n; ++i) {
    vector<int> value = populate_vec();
    arr.push_back(value);
  }

  for (int i = 0; i < q; ++i) {
    cin >> i >> j;
    cout << arr[i][j] << endl;
  }

  // cout << n << " " << q << endl;
  return 0;
}

vector<int> populate_vec() {
  int s;
  cin >> s;
  vector<int> v(s);

  for (int i = 0; i < s; i++)
    cin >> v[i];

  return v;
}