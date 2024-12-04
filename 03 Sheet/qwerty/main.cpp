#include <iostream>
#include <vector>

int main() {
    std::vector<int> p(26);
    for (int i = 0; i < 26; ++i) {
        std::cin >> p[i];
    }

    std::string s;

    for (const int c : p) {
        s += 'a' + (c - 1);
    }

    std::cout << s << std::endl;

  return 0;
}