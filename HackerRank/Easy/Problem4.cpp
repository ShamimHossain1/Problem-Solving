#include <iostream>

using namespace std;





int main()
{
    
    int n;
    
    cin>>n;
 if (n >= 1 && n <= 9) {
        const char* numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        cout << numbers[n - 1];
    } else {
        cout << "Greater than 9";
    }
    return 0;
}
