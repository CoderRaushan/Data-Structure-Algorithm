#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    // Function to reverse the digits of a number
    int reverse(int n) {
        int r = 0;
        while (n > 0) {
            r = r * 10 + (n % 10);
            n = n / 10;
        }
        return r;
    }

    // Function to count distinct integers in the vector, including their reversed forms
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            int ele = reverse(nums[i]);
            s.insert(nums[i]);
            s.insert(ele);
        }
        return s.size();
    }
};

int main() 
{
    Solution solution;
    vector<int> nums = {123, 456, 789, 321, 654};
    int result = solution.countDistinctIntegers(nums);
    cout << "Number of distinct integers (including reversed): " << result << endl;
    return 0;
}
