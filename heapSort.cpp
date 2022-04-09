#include<iostream>
using namespace std;

void max_heapify(int heap[], int heap_size, int i)
{
    int l,r,largest,t;

    largest = i; // Initialize largest as root
    l = 2 * i ; // left child
     r = 2 * i + 1;

    if(l<heap_size && heap[l] > heap[i])
    {
        largest=l;

    }
    else{
        largest=i;
    }

    if(r<heap_size && heap[r] > heap[largest]){
        largest=r;
    }
    if (largest!=i)
    {
        t=heap[i];
        heap[i] = heap[largest];
        heap[largest] = t;
        max_heapify(heap, heap_size, largest);
    }
}

void heap_sort(int heap[], int heap_size)
{

    for (int i = heap_size / 2 - 1; i >= 0; i--)
        max_heapify(heap, heap_size, i);

    for (int i = heap_size - 1; i >= 0; i--) {

        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;

        max_heapify(heap, i, 0);
    }
}
void printArr(int heap[], int heap_size)
{
    for(int i=0; i<heap_size; ++i)
    {
        cout<<heap[i]<<" ";
    }
}
int main()
{
    int heap[]={47,9,22,42,27,25,0};
    int heap_size =sizeof(heap)/sizeof(heap[0]);
    cout<<"Before sorting array elements are : \n";
    printArr(heap,heap_size);
    heap_sort(heap,heap_size);
    cout<<"\n After sorting array elements are : \n";
    printArr(heap,heap_size);
    return 0;
}



