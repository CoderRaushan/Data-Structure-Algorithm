#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int binarySearch(vector<int> arr, int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}
int main()
{
    unordered_map<int, int> m;
    vector<int> arr = {3, 3, 3, 3};
    int n = arr.size();           // 5
    sort(arr.begin(), arr.end()); 
    for(auto it:arr)
    {
        m[it]++;
    }
    for (int i = 1; i <= n; i++)  // 5
    {
        if (binarySearch(arr, 0, n - 1, i) == -1)
        {
            m[i]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<m[i]<<" ";
    }
    return 0;
    //total space c=O(n)
    //total Time c=O(nlogn)+O(n)+O(nlogn)+O(n)==O(nlogn)
}


// OPTIMAL APPROACH
// int main()
// {
//     unordered_map<int, int> m;//SC=O(n)
//     vector<int> arr = {2, 3, 2, 3, 5};
//     int n = arr.size();          
//     for(auto it:arr)//TC=O(n)
//     {
//         m[it]++;
//     }
//     for (int i = 1; i <= n; i++)// // TC=O(n)
//     {
//        cout<<m[i]<<" ";
//     }
//     return 0;
//     //total space c=O(n)
//     //total Time c=O(nlogn)+O(n)+O(nlogn)+O(n)==O(nlogn)
// }