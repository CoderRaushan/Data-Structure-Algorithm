#include<iostream>
#include<vector>
using namespace std;
int LinearSearch(vector<int>&v,int k)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(v[i]==k)
        {
            return i;
        }
    }
    return -1;
}
int BinarySearch(vector<int>&v,int low,int high,int k)
{
    int mid= low + (high - low) / 2;
    if(low>high) return -1;
    if(v[mid]==k) return mid;
    if(v[mid]>k)
    {
        return BinarySearch(v,0,mid-1,k);
    }
    else 
    {
       return  BinarySearch(v,mid+1,high,k);
    }
}
int main()
{
    vector<int>v={6,7,9,11,43,56,99};
    int k=9;
    int n=v.size();
    int low=0;
    int high=n;
    cout<<BinarySearch(v,low,high,k);
    return 0;
}