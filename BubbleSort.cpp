#include <iostream>
using namespace std;

void bubble(int *, int);

int main() {
  setlocale(LC_ALL, "RU");
  int n;
  cout << "Введите длину массива: ";
  cin >> n;
  int *mas = new int[n];
  for (int i = 0; i < n; ++i) {
    cout << "Введите mas[" << i << "]: ";
    cin >> mas[i];
  }

  cout << "Начальный массив: \n";
  for (int i = 0; i < n; ++i) {
    cout << "mas[" << i << "]: " << mas[i] << endl;
  }

  bubble(mas, n);

  cout << "\nОтсортированный массив:\n";
  for (int i = 0; i < n; ++i) {
    cout << "mas[" << i << "]: " << mas[i] << endl;
  }

  delete[] mas;
  mas = NULL;
  cin.get();
  return 0;
}

void bubble(int* arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int b = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = b;
      }
    }
  }
}