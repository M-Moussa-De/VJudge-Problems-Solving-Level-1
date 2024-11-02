#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int bills[] = {100, 20, 10, 5, 1};
    long long billsTotal = 0;

    for(int i = 0; i < sizeof(bills) / sizeof(bills[0]); i++) {
        if (n == 0) break;
        
        billsTotal += n / bills[i];
        n %= bills[i];
    }

    cout << billsTotal << endl;

    return 0;
}
