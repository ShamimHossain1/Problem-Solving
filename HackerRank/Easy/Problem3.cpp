// Input Format

// Input consists of the following space-separated values: int, long, char, float, and double, respectively.

// Output Format

// Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

// Sample Input

// 3 12345678912345 a 334.23 14049.30493
// Sample Output
// 3
// 12345678912345
// a
// 334.230
// 14049.304930000


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    
     int integer;
    long long_integer;
    char character;
    float float_num;
    double double_num;
    
     scanf("%d %ld %c %f %lf", &integer, &long_integer, &character, &float_num, &double_num);
    
    // Printing output
    printf("%d\n", integer);
    printf("%ld\n", long_integer);
    printf("%c\n", character);
    printf("%.3f\n", float_num);
    printf("%.9lf\n", double_num);
    
    return 0;
}
