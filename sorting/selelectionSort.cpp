#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) //O(n)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) //O(n)
        {
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}//tc=O(n^2)

int main() 
{
    int arr[] = {34, 65, 12, 2, 3, 0, 5, 43, 66, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}