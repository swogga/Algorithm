#include <iostream>
using namespace std;

int dgr(int n) {
  while (n > 9) {
    int sum = 0;
    while (n > 0) {
      sum += n % 10;
      n /= 10;
    }
    n = sum;
  }
  return n;
}

int main() {
  cout<<dgr(16) << endl;
  cout << dgr(942) << endl;
  cin.get();
  return 0;
}
// https://www.codewars.com/kata/541c8630095125aba6000c00