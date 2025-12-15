#include <iostream>
using namespace std;

int main() {
  int number = 10;
  int sum = 0;

  for (int i = 1; i < number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }

  cout << sum << endl;
  cin.get();
  return 0;
}
// https://www.codewars.com/kata/514b92a657cdc65150000006