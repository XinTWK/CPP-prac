#include<iostream>
using namespace std;

// �R�A�������
// �Ҧ���H���@�ɦP�@�Ө��
// �R�A������ƥu��X���R�A�����ܶq

class Person
{
public:
	// �R�A�������
	static void func()
	{
		m_A = 100;  // �R�A������ƥi�H�X�� �R�A�����ܶq
		//m_B = 200;  // �R�A������� ���i�H�X�� �D�R�A�����ܶq, �L�k�Ϥ��쩳�O���ӹ�H��m_B���ݩ�
		cout << "static void func�ե�" << endl;
	}

	static int m_A; // �R�A�����ܶq
	int m_B; // �D�R�A�����ܶq

	// �R�A������Ƥ]�O���X���v����
private:
	static void func2()
	{
		cout << "static void func2�ե�" << endl;
	}
};

int Person::m_A = 0;

void test01()
{
	// 1.�q�L��H�X��
	Person p;
	p.func();

	// 2.�q�L���W�X��
	Person::func();

	//Person::func2();  ���~�X�ݨB�D�p���R�A�������
}



int main() {

	test01();


	system("pause");

	return EXIT_SUCCESS;
}