// #include<bits/stdc++.h>
// using namespace std;
// int linear(int *a,int tar,int idx)
// {
//     int n=idx;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==tar)
//         {
//             return a[i];
//         }
//     }
//     return 0;
// }
// int main()
// {
//  int arr[]={1,5,62,4,2,3,28};
//  cout<<linear(arr,78,7);
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int binarysearch(int *a, int low, int high, int found)
{
    if(low>high)return -1;
    int mid = (low + high) / 2;
    if (a[mid] == found)
        return a[mid];
    else if (a[mid] < found)
    {
        binarysearch(a, mid + 1, high, found);
    }
    else
    {
        binarysearch(a, low, mid-1, found);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << binarysearch(arr, 0, 7, 14);
}