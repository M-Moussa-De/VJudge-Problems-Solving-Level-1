#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  // Count occurrences of group sizes
  int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
  for (int i = 0; i < n; ++i) {
    int s;
    std::cin >> s;
    if (s == 1) count1++;
    else if (s == 2) count2++;
    else if (s == 3) count3++;
    else if (s == 4) count4++;
  }

  // Calculate taxis required
  int taxis = 0;

  // Groups of size 4 require one taxi each
  taxis += count4;

  // Groups of size 3 can pair with groups of size 1
  int pairs = std::min(count3, count1);
  taxis += pairs;
  count3 -= pairs;
  count1 -= pairs;

  // Remaining groups of size 3 require one taxi each
  taxis += count3;

  // Groups of size 2 can share a taxi (2 per taxi)
  taxis += count2 / 2;
  if (count2 % 2 == 1) {
    // If there is an odd group of size 2, it needs one taxi
    taxis += 1;
    // It can take up to 2 groups of size 1 along
    count1 -= std::min(2, count1);
  }

  // Remaining groups of size 1 require taxis (4 per taxi)
  taxis += (count1 + 3) / 4;

  std::cout << taxis << std::endl;

  return 0;
}
