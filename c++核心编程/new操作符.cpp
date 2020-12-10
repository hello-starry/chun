#include<iostream>
using namespace std;

//new 的使用语法
int *function()
{
	//在堆区创建整型数据
	//new 返回的是改数据类型的指针
	int * p = new int(10);  //10代堆区中存放的就是10
	return p;
}
void test()
{
	//创建10整形的数组，在堆区
	int *arr = new int[10]; //10代表堆区中有10个数组.
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放数组的时候要加一个中括号
	delete[] arr;

}

int main()
{
	int *p = function();
	cout << *p <<endl;
	cout << *p << endl; 
	cout << *p << endl; //堆区的数据由管理员开辟和释放，如果想释放堆区的数据，使用关键字delete
	delete p;           //delete 后面接指针
	//cout << *p << endl;  错误因为数据已经释放了，不能够在访问了.
	test();
	system("pause");
	return 0;
}