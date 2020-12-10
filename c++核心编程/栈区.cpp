#include<iostream>
using namespace std;
//由编译器自动分配释放, 存放函数的**参数值, 局部变量**等
//
//​		注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放



int * func() //形参的数据也放在栈区中
{
	int a=10;
	return &a; //局部变量也存放在栈区中，不要反悔局部变量的地址，因为局部变量存放在栈区中，函数执行完之后自动释放
}
int main()
{
	int *p = func();
	cout << *p << endl; //第一次没串问题是因为编译器为我们保存了数据
	cout << *p << endl;
	system("pause");
	return 0;
}