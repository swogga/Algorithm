#include <iostream>
using namespace std;

void ChoiceSort(int* , int);

int main() {
  setlocale(LC_ALL, "RU");
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = 6;

  ChoiceSort(arr, n);

  cout << "mas:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }

  cin.get();
  return 0;
}

void ChoiceSort(int* mas, int m) {
  int minIndex;
  for (int i = 0; i < m - 1; i++) {
    minIndex = i;

    for (int j = i + 1; j < m; j++) {
      if (mas[j] < mas[minIndex]) {
        minIndex = j;
      }
    }

    int el = mas[i];
    mas[i] = mas[minIndex];
    mas[minIndex] = el;
  }
}
