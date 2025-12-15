#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "abcd";
  string result = "";

  for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    result += toupper(c);

    for (int j = 0; j < i; j++) {
      result += tolower(c);
    }

    if (i != s.length() - 1) {
      result += '-';
    }
  }

  cout << result << endl;
  cin.get();
  return 0;
}
// https://www.codewars.com/kata/5667e8f4e3f572a8f2000039