class Solution {
public:
    // bool uniqueOccurrences(vector<int>& arr) 
    // {
    //      unordered_map<int, int> occurrence_map;

    // // Count occurrences of each element
    // for (int num : arr) {
    //     occurrence_map[num]++;
    // }

    // unordered_set<int> occurrence_set;

    // // Check for unique occurrences
    // for (const auto& pair : occurrence_map)
    // {
    //     if (occurrence_set.find(pair.second) != occurrence_set.end()) 
    //     {
    //         return false;
    //     }
    //     occurrence_set.insert(pair.second);
    // }

    // return true;
    // }

    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int>m;
        unordered_set<int>s;
       for(int i=0;i<arr.size();i++)
       {
            m[arr[i]]+=1;
       }
       int map_len=m.size();
       for(auto ele:m)
       {
         s.insert(ele.second);
       }
       int set_len=s.size();
       if(map_len==set_len)
       {
        return true;
       }else
       {
        return false;
       }
    }
};