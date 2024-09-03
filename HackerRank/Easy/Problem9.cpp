// Consider an n-element array, a, where each index i in the array contains a reference to an array of ki
//  integers (where the value of k, varies from array to array). See the Explanation section below for a
//  diagram.
//  Given a, you must answer q queries. Each query is in the format i j. where i denotes an index in
//  array a and j denotes an index in the array located at a[i]. For each query, find and print the value of
// element j in the array at location a[i] on a new line.
//  Click here to know more about

// Output Format

// For each pair of  and  values (i.e., for each query), print a single integer that denotes the element located at index  of the array referenced by . There should be a total of  lines of output.

// Sample Input

// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3
// Sample Output

// 5
// 9

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n , q;
    cin >> n >> q;
    vector<vector<int>> arr(n);
    

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vector<int> a(k);
        
        for (int i = 0; i < k; i++)
        {
            cin >> a[i]; 
        } 
        arr[i] = a;
    }

    for (int i = 0; i < q; i++)
    {
        int l , r;
        cin >> l >> r;

        cout<<arr[l][r]<<endl;

    }
    
    
   

    return 0;
}
