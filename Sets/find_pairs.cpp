#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm> // For reverse

using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) 
    {
        int count = 0;
        unordered_set<string> s;
        
        for (int i = 0; i < arr.size(); i++) 
        {
            string str = arr[i];
            reverse(str.begin(), str.end());
            // If the reverse string is found in the set, we have a pair
            if (s.find(str) != s.end()) 
            {
                count++;
            } 
            else 
            {
                s.insert(arr[i]); // Add the original string if no pair is found
            }
        }
        return count;
    }
};

int main() {
    Solution solution;

    // Test case
    vector<string> arr = {"abc", "cba", "xyz", "zyx", "def"};

    // Call the function and print the result
    int result = solution.maximumNumberOfStringPairs(arr);
    cout << "Maximum number of string pairs: " << result << endl;

    return 0;
}
