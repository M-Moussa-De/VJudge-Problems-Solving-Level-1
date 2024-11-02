#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(c == 0) {
        cout << (a > b ? "Takahashi" : "Aoki") << endl;
    } else {
        cout << (a < b ? "Aoki" : "Takahashi") << endl;
    }

    return 0;
}