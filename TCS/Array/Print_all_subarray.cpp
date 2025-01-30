// // brute force approach
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<vector<int>>v;
//     for(int i=0;i<n;i++)
//     {
        
//         for(int j=i;j<n;j++)
//         {
//             vector<int>subarray;
//             // we can optimise time comp without these innter loop
//             for(int k=i;k<=j;k++)
//             {
//                 // Print all subarrays
//                 cout<<arr[k]<<" ";
//                 // store all subarrays
//                 subarray.push_back(arr[k]);
//             }
//             cout<<endl;
//             v.push_back(subarray);
//         }
//     }
//     //printing stored ele from array    
//     cout<<"printing stored ele from array"<<endl;
//     for(auto it:v)
//     {
//         for(auto i:it)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
//     //Time Complexity: O(N^3).
//     //Space Complexity: O(1).// will not consider space for storing subarray
// }




// // Optimised approach
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<vector<int>> v; // To store all subarrays

    // Generate all subarrays
    for (int i = 0; i < n; i++) 
    {
        vector<int> subarray; // Initialize an empty subarray for each starting index
        for (int j = i; j < n; j++) 
        {
            subarray.push_back(arr[j]); // Add the current element to the subarray
            v.push_back(subarray);     // Store the current subarray
        }
    }
    // Print all stored subarrays
    cout << "Printing all stored subarrays:" << endl;
    for (const auto& subarray : v) 
    {
        for (const auto& element : subarray) 
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
    //Time Complexity: O(N^2).
    //Space Complexity: O(1). // will not consider space for storing subarray
}
