#include <iostream>
using namespace std;
int main()
{
    int n, g, s, b;
    cin >> n;         // 输入一个三位数存到n
    g = n % 10;       // 求出个位存到g中
    s = n / 10 % 10;  // 求出十位存到s中
    b = n / 100 % 10; // 求出百位存到b中
    cout << b << " " << s << " " << g;
    return 0;
}