#include<iostream>
using namespace std;
//ȫ�ֱ���
int g_a = 10;
int g_b = 10;
const  int c_g_a = 10;
const  int c_g_b = 10;

int main()
{
	//ȫ����

	//ȫ�ֱ�������̬����������

	//�����ֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַ" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ" << (int)&b << endl;

	cout << "�ֲ�����g_a�ĵ�ַ" << (int)&g_a << endl;
	cout << "�ֲ�����g_b�ĵ�ַ" << (int)&g_b << endl;

	//��̬����������ͨ�ı���ǰ�����static �����ھ�̬����
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַ" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַ" << (int)&s_b << endl;

	//����
	//�ַ�������
	cout << "�ַ��������ĵ�ַ" << (int)"hello" << endl;
	//const���εı���
	//const ����ȫ�ֱ���
	cout << "ȫ�ֳ����ĵ�ַc_g_a" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ����ĵ�ַc_g_b" << (int)&c_g_b << endl;
	//const ���εľֲ�����
	const  int c_l_a = 10;
	const  int c_l_b = 10;
	cout << "ȫ�ֳ����ĵ�ַc_l_a" << (int)&c_l_a << endl;
	cout << "ȫ�ֳ����ĵ�ַc_l_b" << (int)&c_l_b << endl;
	system("pause");
	return 0;
}

// ˵��
// �ֲ�������const���εľֲ��������ֱ�������--------����ȫ����
//ȫ�ֱ�������̬�������ַ���������const���ε�ȫ�ֱ���-----------��ȫ����