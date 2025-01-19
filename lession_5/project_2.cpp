#include <iostream>
using namespace std;
int main()
{
    int age;       // 声明变量age
    cin >> age;    // 输入到age
    if (age >= 21) // 如果age大于等于21
    {
        cout << "C" << endl; // 输出c
    }
    else if (age >= 20) // 如果age不符合上述条件则判断age是否大于等于20
    {
        cout << "B" << endl; // 如果是则输出b
    }
    else if (age >= 18) // 如果age不符合上述条件则判断age是否大于等于18
    {
        cout << "A" << endl; // 如果是输出18
    }
    if (age < 18)
    {
        cout << "NO" << endl;
    }
    return 0;
}