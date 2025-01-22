#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "请输入学生成绩（0-100）：";
    cin >> score;

    if (score >= 90 && score <= 100)
    {
        cout << "等级：A" << endl;
    }
    else if (score >= 80 && score < 90)
    {
        cout << "等级：B" << endl;
    }
    else if (score >= 70 && score < 80)
    {
        cout << "等级：C" << endl;
    }
    else if (score >= 60 && score < 70)
    {
        cout << "等级：D" << endl;
    }
    else if (score >= 0 && score < 60)
    {
        cout << "等级：E" << endl;
    }
    else
    {
        cout << "输入的成绩无效，请输入0-100之间的成绩。" << endl;
    }

    return 0;
}