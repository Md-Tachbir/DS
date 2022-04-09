#include<bits/stdc++.h>

using namespace std;

int getMax(int a[], int n) {
  int max = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];
  return max;
}

void countSort(int a[], int size, int place) {
  int output[size + 1];
  int max = (a[0] / place) % 10;

  for (int i = 1; i < size; i++) {
    if (((a[i] / place) % 10) > max)
      max = a[i];
  }
  int count[max + 1];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  for (int i = 0; i < size; i++)
    count[(a[i] / place) % 10]++;

  for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];

  for (int i = size - 1; i >= 0; i--) {
    output[count[(a[i] / place) % 10] - 1] = a[i];
    count[(a[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    a[i] = output[i];
}


void radixsort(int a[], int size) {
  int max = getMax(a, size);

  for (int place = 1; max / place > 0; place *= 10)
    countSort(a, size, place);
}


void print(int a[], int n) {
  for (int i = 0; i < n; i++)
    cout<<a[i]<<" ";
}

int main() {
  int a[] = {171, 279, 380, 111, 135, 726, 504, 878, 112};
  int n = sizeof(a) / sizeof(a[0]);
  cout<<"Before sorting array elements are: ";
  print(a,n);
  radixsort(a, n);
  cout<<"\nAfter applying Radix sort: ";
  print(a, n);
  return 0;
}
