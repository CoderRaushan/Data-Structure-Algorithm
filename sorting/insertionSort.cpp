#include<iostream>
using namespace std;
void InserTionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>=1)
        {
            if(arr[j]>arr[j-1]) break;
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
}
int main() 
{
    int arr[] = {5, 2, 4, 3, 1, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    InserTionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}