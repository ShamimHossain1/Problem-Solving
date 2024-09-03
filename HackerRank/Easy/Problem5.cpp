#include <iostream>

using namespace std;

int main() {
    int start, end;
    cin >> start;
    cin >> end;

    const char* numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = start; i <= end; ++i) {
        if (i >= 1 && i <= 9) {
            cout << numbers[i] << endl;
        } else if (i % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}
