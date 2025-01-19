#include <iostream>
using namespace std;

// 函数用于判断是否为闰年
string isLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int year;
    cout << "请输入年份：";
    cin >> year; // 输入年份

    string result = isLeapYear(year); // 调用函数判断是否为闰年
    cout << result << endl;           // 输出结果

    return 0;
}