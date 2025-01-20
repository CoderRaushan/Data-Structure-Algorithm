#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 2, 3, 4, 5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // normal approach 
    int sum = 0;
    for(int i = 0; i <n; i++)
    {
        sum = sum + arr[i];
    }
        cout<<sum<<endl;
    //best approach
    int sum2 = 0;
    int j = n - 1;
    int i = 0;

    while (i <= j)
    {
        if (i == j) 
        { 
            sum2 += arr[i];
        } 
        else 
        {
            sum2 += arr[i] + arr[j];
        }
        i++;
        j--;
    }
    cout << sum2;
   
    return 0;
    // Time Complexity: O(n).
    //Space Complexity: O(1).
}