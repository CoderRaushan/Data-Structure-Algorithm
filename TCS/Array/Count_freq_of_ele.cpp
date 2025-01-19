#include<iostream>
#include<unordered_map>
using namespace std;

int main() 
{
    int arr[]={10,5,10,15,10,5};//{10,5,10,15,10,5};
    unordered_map<int, int>m;
    for(int ele:arr)
    {
        m[ele]++;
    }
    for(auto ele:m)
    {
        cout<<"Ele:"<<ele.first<<" count is:"<<ele.second<<endl;
    }
    //time complexity: (O(n))
    // Space complexity: (O(m)) here m is no of unique ele 
    return 0;
}