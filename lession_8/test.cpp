#include <iostream>
using namespace std;

int main()
{
    // 使用 for 循环从 1 迭代到 10
    for (int i = 1; i <= 10; ++i)
    {
        cout << i; // 输出当前数字
        if (i < 10)
        { // 如果不是最后一个数字，输出一个空格
            cout << " ";
        }
    }
    cout << endl; // 输出换行符，结束这一行
    return 0;
}
