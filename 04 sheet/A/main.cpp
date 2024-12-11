#include <iostream>

int main() {
  long n; std::cin >> n;
  int arr[n];

  for (long i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  int l, r; std::cin >> l >> r;
  for (long i = l - 1; i < r; i++) {
    std::cout << arr[i] << " ";
  }

  return 0;
}