// #include<bits/stdc++.h>
// using namespace std;

// void findNonRepeatingElement(vector<int>& nums) {
//     sort(nums.begin(),nums.end());//sorting array
    
//     //handling first element of the array.
//     if(nums[0] != nums[1]) cout<<nums[0]<<" ";
    
//     for(int i=1;i<nums.size()-1;i++) 
//        if(nums[i-1] != nums[i] && nums[i] != nums[i+1]) cout<<nums[i]<<" ";
       
//     //handling last element of the array
//     if(nums[nums.size()-2] != nums[nums.size()-1]) cout<<nums[nums.size()-1];
// }

// int main() {
//     vector<int> nums = {1,2,-1,1,3,1,7,-4,-5,-4};
//     cout<<"Non-repeating numbers are: "<<endl;
//     findNonRepeatingElement(nums);
    
//     return 0;
// }


#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main() {
    vector<int> nums = {1,2,-1,1,3,1,7,-4,-5,-4};
    cout<<"Non-repeating numbers are: "<<endl;
    unordered_set<int>s;
    for(auto it:nums)
    {
        s.insert(it);
    }
    cout<<endl;
    for(auto it:s)
    {
        cout<<it<<" ";
    }
    return 0;
}

//need to be contradication i have to work on it