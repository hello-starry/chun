#include<iostream>
using namespace std;

//new ��ʹ���﷨
int *function()
{
	//�ڶ���������������
	//new ���ص��Ǹ��������͵�ָ��
	int * p = new int(10);  //10�������д�ŵľ���10
	return p;
}
void test()
{
	//����10���ε����飬�ڶ���
	int *arr = new int[10]; //10�����������10������.
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷ������ʱ��Ҫ��һ��������
	delete[] arr;

}

int main()
{
	int *p = function();
	cout << *p <<endl;
	cout << *p << endl; 
	cout << *p << endl; //�����������ɹ���Ա���ٺ��ͷţ�������ͷŶ��������ݣ�ʹ�ùؼ���delete
	delete p;           //delete �����ָ��
	//cout << *p << endl;  ������Ϊ�����Ѿ��ͷ��ˣ����ܹ��ڷ�����.
	test();
	system("pause");
	return 0;
}