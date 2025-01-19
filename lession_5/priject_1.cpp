#include <iostream>
using namespace std;
int main()
{
	int age; // 声明变量age
	cout << "请输入你的年龄已判断是否符合驾驶证要求";
	cin >> age; // 输入变量

	if (age >= 18)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	return 0;
}