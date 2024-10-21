#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> map;
        vector<int> ans;

        // Searching
        for (int i = 0; i < nums.size(); i++) 
        {
            int rem = target - nums[i];
            if (map.find(rem) != map.end()) 
            {
                ans.push_back(map[rem]);
                ans.push_back(i);
                return ans; // Return as soon as you find the solution
            } 
            else 
            {
                map[nums[i]] = i;
            }
        }
        return ans;
    }
};

int main() 
{
    vector<int> vec = {2, 43, 4, 4, 3, 4};
    int target = 7; // You need to set the target value

    Solution solution;
    vector<int> ans = solution.twoSum(vec, target);

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }
    return 0;
}
