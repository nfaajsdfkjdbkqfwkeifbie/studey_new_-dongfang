//判断一个数是不是3的倍数
#include <iostream>
using namespace std;
int main()
{
    int n;    // 声明变量
    cin >> n; // 输入一个数存到n
    if (n % 3 == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}