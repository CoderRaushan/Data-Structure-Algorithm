#include<iostream>
#include <vector>
using namespace std;

void rotateleft(int i, int j, vector<int>& nums)
{
    while(i < j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

void rotate(vector<int>& nums, int k)
{
    int n = nums.size();
    if (k > n)
    {
        k = k % n;
    }
    rotateleft(n - k, n - 1, nums); // Rotate the last k elements
    rotateleft(0, n - k - 1, nums); // Rotate the first n-k elements
    rotateleft(0, n - 1, nums);     // Rotate the entire array
}
void display(vector<int>nums)
{
    for(auto it:nums)
    {
        cout<<it<<" ";
    }
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    rotate(nums,3);
    display(nums);
    return 0;
}