#include <iostream>
#include <string>
using namespace std;

//�����ܼ�
int g_a = 20;
int g_b = 20;

//const �׹��������ܼ�, �����ܼ�
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//������

	//�����ܼ� , �R�A�ܼ� , �`�q

	//�Ыش��q�����ܼ�
	int a = 10;
	int b = 10;

	cout << "�����ܼ�a���a�}��:  " << (int)&a << endl;
	cout << "�����ܼ�b���a�}��:  " << (int)&b << endl;

	cout << "�����ܼ�g_a���a�}��:  " << (int)&g_a << endl;
	cout << "�����ܼ�g_b���a�}��:  " << (int)&g_b << endl;

	//�R�A�ܼ� �b���q�ܼƫe���[static , �ݩ��R�A�ܼ�
	static  int s_a = 10;
	static  int s_b = 10;
	cout << "�R�A�ܼ�s_a���a�}��:  " << (int)&s_a << endl;
	cout << "�R�A�ܼ�s_b���a�}��:  " << (int)&s_b << endl;

	//�`�q
	//�r��`�q
	cout << "�r��`�q���a�}��: " << (int)"hello world" << endl;

	//const�׹����ܼ�
	//const�׹��������ܼ�. const �׹��������ܼ�

	cout << "�����ܼ� c_g_a���a�}��:  " << (int)&c_g_a << endl;
	cout << "�����ܼ� c_g_b���a�}��:  " << (int)&c_g_b << endl;

	const int c_l_a = 10; //c-const g-global l-local
	const int c_l_b = 10;

	cout << "�����`�� c_l_a���a�}��:  " << (int)&c_l_a << endl;
	cout << "�����`�� c_l_b���a�}��:  " << (int)&c_l_b << endl;



	system("pause");
	return 0;

}