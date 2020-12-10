#include<iostream>
using namespace std;

//引用做函数的返回值
//1.不要返回局部变量的引用
int &test()
{
	int a = 10; //局部变量存放在四区中的  栈区
	int &b = a;
	return b;
}
//函数的调用作为左值
int &test02()
{
	static int a = 10;//静态变量存放在四区中的全局区
	return a;
}
int main()
{
	int &ref = test();
	cout << "ref = " << ref << endl;  //第一结果正确，是因为编译器保留了
	cout << "ref = " << ref << endl;   //第二次结果错误，因为内存已经释放了
	int &ref2 = test02();
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;
	test02() = 1000; //函数的调用作为左值.
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;
	system("pause");
	return 0;
}