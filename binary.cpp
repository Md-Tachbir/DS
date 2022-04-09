// Binary Search in C++

#include <iostream>
using namespace std;

int BinarySearch(int A[], int x, int low, int high) {

	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    //int mid = low + (high - low) / 2;
    int mid = (low +high)/2;

    if (A[mid] == x)
      return mid;

    if (A[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main()
{
  int A[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 8;
  int n = sizeof(A) / sizeof(A[0]);
  int result = BinarySearch(A, x, 0, n - 1);

  /*cout<<"The elements of the array: ";
    for(int i = 0;i<n; i++)
        cout<<A[i]<<" ";

*/
cout<<"Element to be searched is: "<<x<<endl;

  if (result == -1)
    cout<<"Not found";
  else
    cout<<"Element is found at index: "<<result;
}
