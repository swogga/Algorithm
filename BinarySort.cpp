#include <iostream>
using namespace std;

int binary(int *, int, int);

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 89, 90, 100};
  int n = 10;

  cout << "Массив: 10 20 30 40 50 60 70 89 90 100" << endl;

  int val = 60;
  int result = binary(arr, n, val);
  if (result != -1) {
    cout << "Найдено на позиции " << result << endl;
  } else {
    cout << "Не найдено" << endl;
  }
  cin.get();
  return 0;
}

int binary(int *mas, int n, int k) {
  int first = 0;
  int last = n - 1;
  int medium;
  while (first <= last) {
    medium = (last + first) / 2;
    if (k == mas[medium]) {
      return medium;
    } else if (k > mas[medium]) {
      first = medium + 1;
    } else {
      last = medium - 1;
    }
  }
  return -1;
}
