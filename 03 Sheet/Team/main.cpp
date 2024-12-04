#include <iostream>

int main() {
  int n, x, y, z; std::cin >> n;
  int sum = 0;

  while (n--) {
    std::cin >> x >> y >> z;

    if(x + y + z >= 2) sum++;
  }

  std::cout << sum << std::endl;
  return 0;
}