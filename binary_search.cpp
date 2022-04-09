#include<iostream>
using namespace std;
int binary_search(int A[], int left,int right, int x)
{
    int  mid;
    left=0;
    right = n-1;
    while (left<=right)
    {
        mid = (left+right)/2;
        if(A[mid] ==x)
        {
            return mid;
        }
        if(A[mid]<x)



            left = mid+1;

            else
            {
                right = mid+1;
            }
        }

    return -1;
}
int main()
{
    int A[]={1,4,6,7,10,19,22,23,30};
    int x = 7;
    int n= sizeof(A)/sizeof(A[0]);
    int res = binary_search( A,0,n-1,x);
    cout<<"The elements of the array: ";
    for(int i = 0;i<n; i++)
        cout<<A[i]<<" ";
    cout<<"\n Element to be searched is: "<<x;
    if(res == -1)
        cout<<"\nElement is not exist";
    else
        cout<<"\n Element is present at"<<res <<"position of array";
    return 0;

}
