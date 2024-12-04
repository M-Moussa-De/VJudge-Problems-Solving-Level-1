#include <iostream>

int main() {
  int n; std::cin >> n;
  int sum = 0;
  int x, y;

  while(n--) {
   std::cin >> x >> y;
   if(y - x >= 2) sum++;
  }

  std::cout << sum << std::endl;

  return 0;
}