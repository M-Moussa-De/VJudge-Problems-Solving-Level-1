#include <iostream>
using namespace std;

int main()
{
    const string output[]{"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a;
    cin >> a;
    cout << (a <= sizeof(output) / sizeof(output[0]) ? output[a - 1] : "Greater than 9") << endl;

    return 0;
}