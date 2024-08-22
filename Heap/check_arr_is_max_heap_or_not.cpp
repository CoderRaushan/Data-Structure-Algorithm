#include <iostream>
using namespace std;
int left(int i)
{
    return (2 * i + 1);
}

int right(int i)
{
    return (2 * i + 2);
}

int parent(int i)
{
    return ((i - 1) / 2);
}

bool isMaxHeap(int arr[], int n)
{
    for (int i = 0; i <= (n - 2) / 2; i++)
    {
        if (left(i) < n && arr[left(i)] > arr[i])
            return false;

        if (right(i) < n && arr[right(i)] > arr[i])
            return false;
    }
    return true;
}
int main()
{
    int n = 6;
    int arr[] = {90, 15, 10, 7, 12, 2};//{9, 15, 10, 7, 12, 11} false

    if (isMaxHeap(arr, n))
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
