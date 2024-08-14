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
void leftRotate(vector<int>& arr, int k) 
{
    int n = arr.size();
    k = k % n; 
    rotateLeft(0, n - 1 - k, arr);
    rotateLeft(n - k , n - 1, arr);
    rotateLeft(0, n - 1, arr);
}

void display(vector<int>arr)
{
  for(auto it:arr)
  {
    cout<<it<<" ";
  }
}
int main() 
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;
    leftRotate(arr, d);
    display(arr);
    return 0;
}
