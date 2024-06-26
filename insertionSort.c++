#include <iostream>
using namespace std;

void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int current = array[i];
    int j = i - 1;

    while (current < array[j] && j >= 0) {
      array[j + 1] = array[j]; //moving 1 position after comparing
      j--;
    }
    array[j + 1] = current;
  }
}


int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  insertionSort(arr, n);

  cout << "Sorted array in ascending order:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}