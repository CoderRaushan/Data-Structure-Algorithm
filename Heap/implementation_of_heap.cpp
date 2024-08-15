#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
public:
    int* arr;
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
        if (size == capacity) {
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

        if (li < size && arr[li] < arr[smallest]) smallest = li;
        if (ri < size && arr[ri] < arr[smallest]) smallest = ri;

        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }
};

int main()
{
    MinHeap heap(10);
    heap.insertEleInHeap(88);
    heap.insertEleInHeap(15);
    heap.insertEleInHeap(10);
    heap.insertEleInHeap(30);

    heap.minHeapify(0);

    cout << "Parent of 8th index: " << heap.parent(8) << endl;
    cout << "Left child of 8th index: " << heap.left(8) << endl;
    cout << "Right child of 8th index: " << heap.right(8) << endl;

    cout << "Heap array: ";
    for (int i = 0; i < heap.size; i++)
    {
        cout << heap.arr[i] << " ";
    }
    cout << endl;

    return 0;
}
