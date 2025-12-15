#include <iostream>
using namespace std;

void InsertSort(int *, int);

int main() {
  setlocale(LC_ALL, "RU");

  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = 6;

  InsertSort(arr, n);
  cout << "mas: \n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }

  cin.get();
  return 0;
}

void InsertSort(int *mas, int m) {
  for (int i = 1; i < m; i++) {
    int x = mas[i], y = i - 1;
    while (y >= 0 && mas[y] > x) {
      mas[y + 1] = mas[y];
      y--;
    }
    mas[y + 1] = x;
  }
}
