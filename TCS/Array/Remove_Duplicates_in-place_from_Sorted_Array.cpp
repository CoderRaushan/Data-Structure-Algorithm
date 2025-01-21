// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// // Approach 1:
// int removeDuplicatesInPlace(vector<int> &arr, int n)
// {
//     int j = 0;
//     for (int i = 1; i < n; ++i)
//     {
//         if (arr[j] != arr[i])
//         {
//             j++;
//             arr[j] = arr[i];
//         }
//     }
//     return j + 1;
// }

// // Approach 2: Using Unordered Set (for any array)
// int removeDuplicatesUsingSet(vector<int> &arr, int n)
// {
//     unordered_set<int> s;
//     for (auto it : arr)
//     {
//         s.insert(it);
//     }
//     return s.size();
// }
// int main()
// {
//     vector<int> arr1 = {1, 1, 2, 2, 3, 4, 4};
//     int n1 = arr1.size();
//     cout << "Before removing duplicates (in-place approach): ";
//     for (int num : arr1)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     int newLength1 = removeDuplicatesInPlace(arr1, n1);

//     cout << "Array after removing duplicates (in-place approach): ";
//     for (int i = 0; i < newLength1; ++i)
//     {
//         cout << arr1[i] << " ";
//     }
//     cout << "\nNumber of unique elements (in-place): " << newLength1 << endl;

//     // Test case 2: Unsorted array
//     vector<int> arr2 = {1, 1, 2, 3, 2, 4, 3};
//     int n2 = arr2.size();

//     cout << "\nBefore removing duplicates (using set approach): ";
//     for (int num : arr2)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     int uniqueCount2 = removeDuplicatesUsingSet(arr2, n2);

//     cout << "Number of unique elements (using set): " << uniqueCount2 << endl;
//     return 0;
// }

// Third approach 
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4};
    int n = arr.size();
    unordered_map<int, int>m;
    for(int i=0;i<n;i++)
    {
        if(m.find(arr[i]) == m.end())
        {
            m[arr[i]]++;
        }
    }
    for(auto p:m)
    {
        cout<<p.first<<" ";

        // cout<<p.second<<" ";
    }
    return 0;
    //Time Complexity: O(n) + O(n) = O(n)
    //Space Complexity : O(n) 
}