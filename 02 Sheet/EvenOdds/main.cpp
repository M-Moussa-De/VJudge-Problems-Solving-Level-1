#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long count_odds = (n + 1) / 2;
    cout << (k <= count_odds ? 2 * k - 1 : 2 * (k - count_odds)) << endl;

    return 0;
}
