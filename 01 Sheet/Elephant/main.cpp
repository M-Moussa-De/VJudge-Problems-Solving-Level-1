#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int steps[] {5, 4, 3, 2, 1};
    int totalSteps = 0;

    for (int i = 0; i < sizeof(steps) / sizeof(steps[0]); i++) {
        while (x >= steps[i]) {
            x -= steps[i];
            totalSteps++;
        }
    }

    cout << totalSteps << endl;

    return 0;
}