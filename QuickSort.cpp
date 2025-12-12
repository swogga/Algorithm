#include <iostream>
using namespace std;

void QuickSort(int *, int, int);

int main() {
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = 6;

  QuickSort(arr, 0, n - 1);

  cout << "Отсортированный массив: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  cin.get();
  return 0;
}

void QuickSort(int *arr, int left, int right) {
  int i = left, j = right, mid = (left + right) / 2;
  int piv = arr[mid];

  while (i <= j) {
    while (arr[i] < piv) {
      i++;
    }

    while (arr[j] > piv) {
      j--;
    }

    if (i <= j) {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }

  if (left < j) {
    QuickSort(arr, left, j);
  }

  if (i < right) {
    QuickSort(arr, i, right);
  }
}