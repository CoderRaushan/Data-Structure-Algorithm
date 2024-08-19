#include<bits/stdc++.h>
using namespace std;
void maxHeapify(int arr[], int size, int i)
{
    int li = (2 * i + 1);
    int ri = (2 * i + 2);
    int maximum = i;

    if (li < size && arr[li] > arr[maximum]) maximum = li;
    if (ri < size && arr[ri] > arr[maximum]) maximum = ri;

    if (maximum != i)
    {
        swap(arr[i], arr[maximum]);
        maxHeapify(arr, size, maximum);
    }
}


int main()
{
    int arr[] ={10,15,50,4,20};
    int size = 5;
    //build min heap // output: [50,20,10,4,15]
    for (int i = (size - 2) / 2; i >= 0; i--)
    {
        maxHeapify(arr, size, i);
    }
    // Print the built min heap array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
