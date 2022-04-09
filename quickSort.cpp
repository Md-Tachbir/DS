#include<iostream>
using namespace std;

int partition(int A[], int l, int h)
{
    int pivot = A[l];

    int i=l, j=h;

    while(i<j)
    {
        while(A[i]<=pivot)
        {
            i++;
        }
        while(A[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(A[i],A[j]);
        }
    }
    swap(A[l],A[j]);
    return j;

}

void quick(int A[], int l, int h)
{
    if(l<h)
    {
        int j=partition(A,l,h);
        quick(A,l,j-1);
        quick(A,j+1,h);
    }
}

void printArr(int A[], int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<A[i]<<" ";

}

int main()
{
    int A[] ={9,4,3,11,15,20,2,24,30,1,35};
    int n =sizeof(A)/sizeof(A[0]);
    cout<<"Before sorting array elements are : \n";
    printArr(A,n);
    quick(A,0,n-1);
    cout<<"\n After sorting array elements are : \n";
    printArr(A,n);
    return 0;

}











