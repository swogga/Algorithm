#include <cstring>
#include <iostream>
using namespace std;

void maskify(char *, int);

int main() {
  setlocale(LC_ALL, "RU");
  int n = 16;
  char *mas = new char[n];
  cout << "Введите номер карты: ";
  cin.getline(mas, n);
  cout << "Ваша карта: " << mas << endl;

  maskify(mas, n);
  cout << mas << endl;

  delete[] mas;
  cin.get();
  return 0;
}
void maskify(char *arr, int m) {
  int len = strlen(arr);
  for (int i = 0; i < len - 4; ++i) {
    arr[i] = '#';
  }
}