#include<iostream>
using namespace std;

int main()
{
	int a = 10;
		//1.���ñ����ʼ��
		//int &b;//����ģ����ñ����ʼ��
		int &b = a;
	//2.���ó�ʼ��֮�󣬲����Է����ı�
		int c = 20;
		b = c;
		cout << "a=" << a << endl;
		cout << "b=" << b << endl;
		cout << "c=" << c << endl;
	system("pause");
	return 0;
}