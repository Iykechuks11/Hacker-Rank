#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
  // AND
  int result = 5 & 3; 
  // (0000 0101 & 0000 0011 = 0000 0001 = 1)

  // OR
  int result_or = 5 | 3;
  // (0000 0101 | 0000 0011 = 0000 0111 = 7)

  // XOR
  int result_xor = 5 ^ 3;
  // (0000 0101 ^ 0000 0011 = 0000 0110 = 6)

  // NOT
  int result_not = ~5;

  // LEFT SHIFT
  int result_ls = 5 << 1;
  // (0000 0101 << 1 = 0000 1010 = 10)

  // RIGHT SHIFT
  int result_rs = 5 >> 1;

  cout << "AND: 5 & 3 = " << result << endl;
  cout << "OR: 5 | 3 = " << result_or << endl;
  cout << "XOR: 5 ^ 3 = " << result_xor << endl;
  cout << "NOT: ~5 = " << result_not << endl;
  cout << "LEFT-SHIFT: 5 << 1 = " << result_ls << endl;
  cout << "RIGHT-SHIFT: 5 >> 1 = " << result_rs << endl;
}