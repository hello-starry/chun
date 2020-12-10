#include<iostream>
using namespace std;

//由程序员分配释放,若程序员不释放,程序结束时由操作系统回收  在C++中主要利用new在堆区开辟内存

int * function()
{
int *p =new int(10); //new 创建的数据不是直接返回数据，而是返回堆区的地址.
//p是一个局部变量，指向的是堆区的数据，可以通过指针解引用找到.
return p;
}
int main()
{
	int *p = function();
	cout << *p << endl; 
	cout << *p << endl;

	//在堆区开辟一个数据
	system("pause");
	return 0;

}