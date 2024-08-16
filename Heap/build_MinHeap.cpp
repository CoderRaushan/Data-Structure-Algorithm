#include<bits/stdc++.h>
using namespace std;
void minHeapify(int arr[], int size, int i)
{
    int li = (2 * i + 1);
    int ri = (2 * i + 2);
    int smallest = i;

    if (li < size && arr[li] < arr[smallest]) smallest = li;
    if (ri < size && arr[ri] < arr[smallest]) smallest = ri;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, size, smallest);
    }
}

int main()
{
    int arr[] = {10, 5, 20, 2, 4, 8};
    int size = 6;
    //build min heap // output: [2,4,8,5,10,20]
    for (int i = (size - 2) / 2; i >= 0; i--)
    {
        minHeapify(arr, size, i);
    }

    // Print the built min heap array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
