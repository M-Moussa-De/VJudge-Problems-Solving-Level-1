#include <iostream>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long n2 = (n + a - 1) / a;
    long long m2 = (m + a - 1) / a;
    cout << n2 * m2 << endl;

    return 0;
}