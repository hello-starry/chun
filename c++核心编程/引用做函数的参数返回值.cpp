#include<iostream>
using namespace std;

//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int &test()
{
	int a = 10; //�ֲ���������������е�  ջ��
	int &b = a;
	return b;
}
//�����ĵ�����Ϊ��ֵ
int &test02()
{
	static int a = 10;//��̬��������������е�ȫ����
	return a;
}
int main()
{
	int &ref = test();
	cout << "ref = " << ref << endl;  //��һ�����ȷ������Ϊ������������
	cout << "ref = " << ref << endl;   //�ڶ��ν��������Ϊ�ڴ��Ѿ��ͷ���
	int &ref2 = test02();
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;
	test02() = 1000; //�����ĵ�����Ϊ��ֵ.
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;
	system("pause");
	return 0;
}