namespace Triangle {
bool isTriangle(int a, int b, int c) {
  bool c1 = (a + b > c);
  bool c2 = (a + c > b);
  bool c3 = (b + c > a);

  if (c1 && c2 && c3) {
    return true;
  } else {
    return false;
  }
}
} 
// https://www.codewars.com/kata/56606694ec01347ce800001b/train/cpp