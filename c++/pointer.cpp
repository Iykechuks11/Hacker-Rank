/*
Complete the update function in the editor below.

update has the following parameters:

  int *a: an integer
  int *b: an integer
*/

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int c = *a;
    int d = *b;

    *a, *b = 0;
    *a = c + d;
    *b = abs(c - d);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}