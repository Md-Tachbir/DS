#include<iostream>
using namespace std;

void bubble_sort (int A[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(A[j]> A[j+1])
            {
                temp = A[j];
                A[j]=A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void print (int A[], int n)
{

    for(int i=0;i<n; i++)
        cout<<A[i]<<" ";

}


int main()
{
    int A[]={10,5,2,8,7};
    int n = sizeof(A)/sizeof(A[0]);
    //cout<<"Before sorting array elements are: \n";
   // print(A,n);
    bubble_sort(A,n);
    cout<<"\n After sorting array elements are: \n";
    print(A,n);
    return 0;
}




