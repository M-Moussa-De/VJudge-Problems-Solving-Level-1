#include <iostream>

int main() {
  int n; std::cin >> n;

  bool is_almost_lucky = false;

  for (const int lucky : {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777}) {
    if (n % lucky == 0) {
      is_almost_lucky = true;
      break;
    }
  }

  std::cout << (is_almost_lucky ? "YES" : "NO") << std::endl;

  return 0;
}