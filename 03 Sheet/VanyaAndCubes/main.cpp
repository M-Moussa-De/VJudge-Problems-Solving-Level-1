#include <iostream>

int main() {
  int n; std::cin >> n;
  int height = 0, cubes_used = 0, level = 1;

  while (true) {
    const int cubes_needed = (level * (level + 1)) / 2;
    if (cubes_used + cubes_needed > n) break;

    cubes_used += cubes_needed;
    height++;
    level++;
  }

  std::cout << height << std::endl;
  return 0;
}