#include <iostream>
using namespace std;
void insertbeginning(int ele, int *arr, int &n)
{

  cout << endl;
  for (int i = n; i >= 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = ele;
  n++;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void insertending(int ele, int *arr, int &n)
{

  cout << endl;
  arr[n] = ele;
  n++;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void insertatpos(int ele, int pos, int *arr, int &n)
{
  if (pos == 0)
  {
    insertbeginning(ele, arr, n);
  }
  if (pos == n)
  {
    insertending(ele, arr, n);
  }
  else
  {
    for (int i = n; i > pos; i--)
    {
      arr[i] = arr[i - 1];
    }
    arr[pos] = ele;
    n++;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
  }
}
int main()
{
  int arr[] = {10, 9, 14, 8, 20, 48, 16, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int value = 21;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  // insertbeginning(value,arr,n);
  // insertending(value,arr,n);
  // insertatpos(value,5,arr,n);
  insertatpos(value, 4, arr, n);
  return 0;
}