#include<iostream>
using namespace std;


//��������

//1.ֵ����
void myswap(int a ,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//2.��ַ����
void myswap02(int *a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.���ô���
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
	myswap03(a, b);  //���ô��ݣ��β�Ҳ�������β�
	cout << "a= " << a<< endl;
	cout << "b= " << b <<endl;


	system("pause");
	return 0;
}
//��ͨ�����ò���������Ч��ͬ����ַ������һ���ġ����õ��﷨�������.