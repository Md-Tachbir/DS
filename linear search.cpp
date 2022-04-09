#include <bits/stdc++.h>
#include<conio.h>

using namespace std;
int linearSearch(int a[], int n, int val) {
  // Going through array linearly
  for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
        return i+1;
    }
  return -1;
}
int main() {
    cin>>"Array : " >>a[i]>>endl;
  //int a[] = {69, 39, 29, 10, 56, 40, 24, 13, 51}; // given array
  cin>>"value : ">>val;
  //int val = 56; // value to be searched
  int n = sizeof(a) / sizeof(a[0]); // size of array
  int res = linearSearch(a, n, val); // Store result
  cout<<"The elements of the array are - ";
  for (int i = 0; i < n; i++)
  cout<<a[i]<<" ";
  cout<<"\nElement to be searched is - "<<val;
  if (res == -1)
  cout<<"\nElement is not present in the array";
  else
  cout<<"\nElement is present at "<<res<<" position of array";
  getch();
}
