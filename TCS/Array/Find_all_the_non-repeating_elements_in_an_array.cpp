#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());//sorting array tc= O{nlogn}

    if(nums[0] != nums[1]) cout<<nums[0]<<" ";
    
    for(int i=1;i<nums.size()-1;i++)   //tc= O{n}
       if(nums[i-1] != nums[i] && nums[i] != nums[i+1]) cout<<nums[i]<<" ";
       
    if(nums[nums.size()-2] != nums[nums.size()-1]) cout<<nums[nums.size()-1];
}

int main() 
{
    vector<int> nums = {1,2,-1,1,3,1,7,-4,-5,-4};
    cout<<"Non-repeating numbers are: "<<endl;
    findNonRepeatingElement(nums);
    return 0;
}
//tc=O(n)+O(nlogn)=O(n)
//sc=O(1)

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main() 
{
    vector<int> nums = {1,2,-1,1,3,1,7,-4,-5,-4};
    cout<<"Non-repeating numbers are: "<<endl;
    unordered_map<int,int>m;
    for(auto it:nums)//tc=O(n)
    {
        m[it]++;//sc=O(n)
    }
    cout<<endl;
    for(auto it:m)//tc=O(n)
    {
        if(it.second == 1)
        {
            cout<<it.first<<" ";//u can also store it and return stored ele
        }
    }
    return 0;
}
//tc=O(n)+O(n)=O(n)
//sc=O(n)