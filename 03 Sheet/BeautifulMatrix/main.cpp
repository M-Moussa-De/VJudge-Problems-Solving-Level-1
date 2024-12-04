#include <iostream>

int main() {
  int row = 0, col = 0, val = 0;
  bool found = false;

  for (int i = 1; i <= 5; ++i) {
    for (int j = 1; j <= 5; ++j) {
      std::cin >> val;
      if (val == 1) {
        row = i;
        col = j;
        found = true;
        // Exit inner loop
        break;
      }
    }
    // Exit outer loop
    if (found) break;
  }

  // Distance to center of 5 x 5 matrix
  std::cout << std::abs(row - 3) + std::abs(col - 3) << std::endl;

  return 0;
}