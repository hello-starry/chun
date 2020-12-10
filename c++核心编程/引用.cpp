//*作用： **给变量起别名
//
//**语法：** `数据类型 &别名 = 原名`
#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int &b = a;
	cout << "a的值" << a << endl;
	cout << "b的值" << b << endl;

	b = 20;
	cout << "a的值" << a << endl;
	cout << "b的值" << b << endl;

	cout << &a << endl;
	cout << &b << endl;
	system("pause");
	return 0;
}

