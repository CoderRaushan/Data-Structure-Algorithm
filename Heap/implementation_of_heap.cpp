#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
public:
    int *arr;
    int size;
    int capacity;

    MinHeap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    ~MinHeap()
    {
        delete[] arr;
    }

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

    void insertEleInHeap(int x)
    {
        if (size == capacity)
        {
            cout << "Heap is full\n";
            return;
        }

        size++;
        int i = size - 1;
        arr[i] = x;

        // Fix the min heap property if it's violated
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void minHeapify(int i)
    {
        int li = left(i);
        int ri = right(i);
        int smallest = i;

        if (li < size && arr[li] < arr[smallest])
            smallest = li;
        if (ri < size && arr[ri] < arr[smallest])
            smallest = ri;

        if (smallest != i)
        {   
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }
    int ExtractMin()
    {
        if (size == 0)
        {
            return INT_MAX;
        }
        if (size == 1)
        {
            size--;
            return arr[0];
        }
        int root = arr[0];
        swap(arr[0], arr[size - 1]);
        size--;
        minHeapify(0);
        return root;
    }

    void DecreaseKey(int i, int value)
    {
        //decreasekey matlab replace given value by given index in minheap 
        // while doing this if minheap property gets distroyed then 
        // swap that ith idx value with parent of ith idx untill arr[parent(i)] > arr[i] where i!=0
        if (value > arr[i])
        {
            cout << "New value is greater than current value\n";
            return;
        }
        arr[i] = value;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void Delete(int i)
    {
        if (i >= size)
        {
            cout << "Index out of bounds\n";
            return;
        }
        DecreaseKey(i, INT_MIN);
        ExtractMin();
    }
    
};

int main()
{
    MinHeap heap(10);
    heap.insertEleInHeap(88);
    heap.insertEleInHeap(15);
    heap.insertEleInHeap(10);
    heap.insertEleInHeap(30);
    cout << "Heap array: ";
    for (int i = 0; i < heap.size; i++)
    {
        cout << heap.arr[i] << " ";
    }
    cout << endl;

    cout << "Parent of 8th index: " << heap.parent(8) << endl;
    cout << "Left child of 8th index: " << heap.left(8) << endl;
    cout << "Right child of 8th index: " << heap.right(8) << endl;

    heap.DecreaseKey(3, 4);
    cout << "Heap array after DecreaseKey: ";
    for (int i = 0; i < heap.size; i++)
    {
        cout << heap.arr[i] << " ";
    }
    cout << endl;

    heap.Delete(2);
    cout << "Heap array after Delete: ";
    for (int i = 0; i < heap.size; i++)
    {
        cout << heap.arr[i] << " ";
    }
    cout << endl;

    return 0;
}
