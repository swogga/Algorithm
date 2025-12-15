#include <iostream>
using namespace std;

void Sort(int *, int n);

int main() {
  int n = 10;
  int *mas = new int[n];
  for (int i = 0; i < n; i++) {
    cout<<"mas";
    cin >> mas[i];
  }
  Sort(mas, n);
  for (int i = 0; i < n; i++) {
    cout << "mas[i]: "<<mas[i] << endl;
  }

  cin.get();
  return 0;
}

void Sort(int *arr, int n) {

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      count++;
    }
  }

  int *odds = new int[count];
  int k = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      odds[k++] = arr[i];
    }
  }

  for (int i = 0; i < count - 1; i++) {
    for (int j = 0; j < count - i - 1; j++) {
      if (odds[j] > odds[j + 1]) {
        int tmp = odds[j];
        odds[j] = odds[j + 1];
        odds[j + 1] = tmp;
      }
    }
  }

  k = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      arr[i] = odds[k++];
    }
  }

  delete[] odds;
}
