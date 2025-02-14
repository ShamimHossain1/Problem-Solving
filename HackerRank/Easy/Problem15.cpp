// Input Format

// The first line contains an integer . Input will consist of  lines where  is the number given in the first line of the input followed by  lines.

// Each of the next  line contains the type of the elements provided and depending on the type, either two strings or two integers or two floating point numbers will be given. The type will be one of int, float or string types only. Out of the following two elements, you have to concatenate or add the second element to the first element.

// Constraints


// , where  is any float value
// , where valueint is any int value
// , where  is the length of any string

// The time limit for this challenge is 4 seconds.

// Output Format

// The code provided in the code editor will use your class template to add/append elements and give the output.

// Sample Input

// 3
// string John Doe
// int 1 2
// float 4.0 1.5
// Sample Output

// JohnDoe
// 3
// 5.5
// Explanation

// "Doe" when appended with "John" gives "JohnDoe". 2 added to 1 gives 3, and 1.5 added to 4.0 gives 5.5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

template <typename T>
class AddElements {
    T element;
public:
    AddElements(T arg) { element = arg; }
    T add(T arg) { return element + arg; }
};

// Template specialization for string
template <>
class AddElements<string> {
    string element;
public:
    AddElements(string arg) { element = arg; }
    string concatenate(string arg) { return element + arg; }
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
