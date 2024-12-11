#include <iostream>

int main() {
  int n; std::cin >> n;
  int arr[n][n];

  for (int i = 0; i < n; ++i) {
    arr[i][0] = 1; // First column
    arr[0][i] = 1; // First row
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
    }
  }

  std::cout << arr[n - 1][n - 1] << '\n';
  return 0;
}