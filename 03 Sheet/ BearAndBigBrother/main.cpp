#include <iostream>

int main() {
  int a, b; std::cin >> a >> b;
  int c = 0;
  while (a <= b) {
    c++;
    a *= 3;
    b *= 2;
  }
  std::cout << c << std::endl;

  return 0;
}