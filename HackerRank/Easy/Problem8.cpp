// Output Format

// Print the  integers of the array in the reverse order, space-separated on a single line.

// Sample Input

// 4
// 1 4 3 2
// Sample Output

// 2 3 4 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
   int n, j;
   cin >> n;
   j = n;
   vector<int> arr(n);
   vector<int> arr2(n);

   for(int i = 0; i < n; i++){
    cin >> arr[i];
   }
  for(int i = 0; i < n; i++){

   arr2[i] = arr[j-1];
   cout<<arr2[i]<<" ";
   --j;

   }

    return 0;
}
