// class Solution {
// public:
//     int countPartitions(vector<int>& nums) 
//     {
//         int totalsum=0;
//         int count=0;
//         int  n=nums.size();
//         for(auto it:nums)
//         {
//            totalsum=totalsum+it;
//         }
//         int leftsum=0;
//         for(int i=0;i<n-1;i++)
//         {
//             leftsum=leftsum+nums[i];
            
//             int rightsum=totalsum-leftsum;
            
//             if((leftsum-rightsum)%2==0)
//             {
//                 count++;
//             }
//         }
//         return count;
//        //Total Time Complexity=O(n)+O(n)=O(n)
//     }
// };