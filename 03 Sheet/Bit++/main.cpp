#include "iostream"

int main() {
  int n; std::cin >> n;
  int sum = 0;
  std::string s;

  while (n--) {
    std::cin >> s;
    s.find('+') == std::string::npos ? sum-- : sum++;
  }

  std::cout << sum << std::endl;
  return 0;
}