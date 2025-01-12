#include <iostream>
using namespace std;
int main()
{
    int n, g, s, b;
    cin >> n;
    g = n % 10;
    s = n / 10 % 10;
    b = n / 100 % 10;
    if (n == g * g * g + s * s * s + b * b * b)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}