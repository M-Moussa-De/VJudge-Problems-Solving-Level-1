#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    string res = a > 0 && b == 0 ? "Gold" : a == 0 && b > 0 ? "Silver"
                                                            : "Alloy";
    cout << res << endl;

    return 0;
}