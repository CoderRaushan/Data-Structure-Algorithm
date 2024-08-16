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

void buildMaxHeap(int arr[], int size)
{
    for (int i = (size - 2) / 2; i >= 0; i--)
    {
        maxHeapify(arr, size, i);
    }
}

void heapSort(int arr[], int size)
{
    buildMaxHeap(arr, size);

    for (int i = size - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {34, 65, 12, 2, 3, 0, 5, 43, 66, 9};
    int n = 10;

    heapSort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
