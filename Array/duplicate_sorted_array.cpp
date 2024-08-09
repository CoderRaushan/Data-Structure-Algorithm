#include <iostream> 
#include <vector>

using namespace std;

vector<int> removeDuplicates(vector<int>& nums) 
{ 
    // If nums is empty, return an empty vector
    if (nums.empty()) return {};

    // Vector to store the unique elements
    vector<int> ans;
    ans.push_back(nums[0]);

    for (int j = 1; j < nums.size(); ++j)
    {
        // Check if the current element is different from the last unique element
        if (nums[j] != nums[j - 1])
        {
            ans.push_back(nums[j]);
        }
    }
    
    return ans;
}   

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> finalans = removeDuplicates(nums);
    
    for (auto it : finalans)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
