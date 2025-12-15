#include <iostream>
using namespace std;

int sum(int numbers[], int size) {
  int min1 = numbers[0];
  int min2 = numbers[1];
  if (min1 > min2) {
    int temp = min1;
    min1 = min2;
    min2 = temp;
  }

  for (int i = 2; i < size; i++) {
    if (numbers[i] < min1) {
      min2 = min1;
      min1 = numbers[i];
    } else if (numbers[i] < min2) {
      min2 = numbers[i];
    }
  }

  return (int)min1 + min2;
}

int main() {
  int arr[] = {19, 5, 42, 2, 77};
  int size = 5;
  cout << sum(arr, size) << endl;
  cin.get();
  return 0;
}
// https://www.codewars.com/kata/558fc85d8fd1938afb000014