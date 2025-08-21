/* The program takes inputs of five data-types and produces the output correctly 
   with some adjustments in float and double.

   Hints about precision from: https://cplusplus.com/reference/ios/ios_base/precision/
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    /*
    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value
    
    int long char float double
    */
    int val_int;
    long val_long;
    char val_char;
    float val_float;
    double val_double;
    
    // Sample input: 3 12345678912345 a 334.23 14049.30493

    scanf("%d %ld %c %f %lf", &val_int, &val_long, &val_char, &val_float, &val_double);
    

    /*
    Sample output

    3
    12345678912345
    a
    334.230
    14049.304930000
    
     */
    cout.setf( ios::fixed, ios::floatfield ); // floatfield set to fixed
    cout << val_int << endl;
    cout << val_long << endl;
    cout << val_char << endl;
    cout.precision(4);
    cout << val_float << endl;
    cout.precision(9);
    cout << val_double << endl;

    return 0;
}