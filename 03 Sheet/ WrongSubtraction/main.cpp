#include <iostream>

int main() {
  long int n; int k;
  std::cin >> n >> k;
  while(k--) n % 10 != 0 ? n-- : n /= 10;
  std::cout << n << std::endl;

  return 0;
}