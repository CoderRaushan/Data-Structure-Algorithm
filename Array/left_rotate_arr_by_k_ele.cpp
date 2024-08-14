#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to reverse elements from index l to index r in the array
void rotateLeft(int l, int r, vector<int>& arr) {
    while (l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

// Function to left rotate array elements by d positions using the three-step approach
void leftRotate(vector<int>& arr, int k) 
{
    int n = arr.size();
    k = k % n; 
    rotateLeft(0, n - 1 - k, arr);
    rotateLeft(n - k , n - 1, arr);
    rotateLeft(0, n - 1, arr);
}

int main() 
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;
    leftRotate(arr, d);
    cout << "Array after left rotation:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
