#include<iostream>
using namespace std;

//�ɳ���Ա�����ͷ�,������Ա���ͷ�,�������ʱ�ɲ���ϵͳ����  ��C++����Ҫ����new�ڶ��������ڴ�

int * function()
{
int *p =new int(10); //new ���������ݲ���ֱ�ӷ������ݣ����Ƿ��ض����ĵ�ַ.
//p��һ���ֲ�������ָ����Ƕ��������ݣ�����ͨ��ָ��������ҵ�.
return p;
}
int main()
{
	int *p = function();
	cout << *p << endl; 
	cout << *p << endl;

	//�ڶ�������һ������
	system("pause");
	return 0;

}