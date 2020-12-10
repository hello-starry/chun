#include<iostream>
using namespace std;


//交换函数

//1.值传递
void myswap(int a ,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//2.地址传递
void myswap02(int *a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用传递
void myswap03(int &a,int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	myswap03(a, b);  //引用传递，形参也会修饰形参
	cout << "a= " << a<< endl;
	cout << "b= " << b <<endl;


	system("pause");
	return 0;
}
//：通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单.