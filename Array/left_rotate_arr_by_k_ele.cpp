#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to reverse elements from index l to index r in the array
void reverseRange(int l, int r, vector<int>& arr) {
    while (l <= r) 
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}
void leftRotate(vector<int>& arr, int k) 
{
    int n = arr.size();
    k = k % n; // In case k is greater than n
    
    // Step 1: Reverse the first k elements
    reverseRange(0, k - 1, arr);
    
    // Step 2: Reverse the remaining n-k elements
    reverseRange(k, n - 1, arr);
    
    // Step 3: Reverse the entire array
    reverseRange(0, n - 1, arr);
}

void display(const vector<int>& arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main() 
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    leftRotate(arr, k);
    display(arr);
    return 0;
}
