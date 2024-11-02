#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int maxCount = 0;
    int currCount = 0;

    for(char c : s) {
      if(c == 'R') {
        currCount++;
      } else {
        maxCount = max(maxCount, currCount);
        currCount = 0;
      }
    }

    cout << max(maxCount, currCount) << endl;

    return 0;
}