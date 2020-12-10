#include<iostream>
using namespace std;

int main()
{
	int a = 10;
		//1.引用必须初始化
		//int &b;//错误的，引用必须初始化
		int &b = a;
	//2.引用初始化之后，不可以发生改变
		int c = 20;
		b = c;
		cout << "a=" << a << endl;
		cout << "b=" << b << endl;
		cout << "c=" << c << endl;
	system("pause");
	return 0;
}