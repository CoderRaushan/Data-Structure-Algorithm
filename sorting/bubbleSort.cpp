#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        bool isSorted = false;
        for (int j = 0; j < n - i - 1; j++) //=>n-1-i isliye kyoki j loop arr[j] > arr[j+1] se compare 
        //kar rha hai isliye j ko n tak nahi chalayenge balki n-1 and chuki har i ke iteration mei ek element
        //last mei sorted ho jata hai toh usko nahi compare karenge isliye n-1-i
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]); 
                isSorted = true;
            }
        }
        if (!isSorted) 
        {
            return;
        }
    }
}

int main() 
{
    int arr[] = {1, 2, 4, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
