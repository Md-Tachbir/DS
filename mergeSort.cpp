#include<iostream>
using namespace std;

void merge(int A[], int left, int mid, int right)
{
    int i,j,k;
    int index_a, index_l, index_r;
    int size_left, size_right;

    size_left = mid-left+1;
    size_right = right-mid;

    int L[size_left], R[size_right];
    for(i=0; i<size_left; i++){
        L[i] = A[left+i];
    }
    for(j=0; j<size_right;j++){
        R[j] = A[mid+1+j];
    }
    i=0;
    j=0;
    k=left;

    while(i<size_left && j<size_right)
    {
        if(L[i]<= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<size_left)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while(j<size_right)
    {
        A[k] = R[j];
        j++;
        k++;
    }

}

void merge_sort(int A[], int left, int right)
{
    if(left>=right)
    {
        return;
    }
    //int mid = left+(right-left)/2;
    int mid = (left+right)/2;
    merge_sort(A,left,mid);
    merge_sort(A,mid+1,right);
    merge(A,left,mid,right);

}
void printArr(int A[], int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<A[i]<<" ";
}

int main()
{
    int A[]={11,30,24,7,31,16,39,41};
    int n= sizeof(A)/sizeof(A[0]);
    cout<<"Before sorting array elements are: \n";
    printArr(A,n);
    merge_sort(A,0,n-1);
    cout<<"\n After sorting array elements are : \n";
    printArr(A,n);
    return 0;
}



