#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �~�Ӥ����P�W�R�A�����B�z�覡

class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}
};
 
int Base::m_A = 100;

class Son : public Base
 {
 public:
	 static int m_A;

	 static void func()
	 {
		 cout << "Son - static void func()" << endl;
	 }
 };

int Son::m_A = 200;


// �P�W�R�A�����ݩ�
void test01()
{
	// 1. �q�L��H�X��
	cout << "�q�L��H�X��: " << endl;
	Son s;
	cout << "Son �U m_A = " << s.m_A << endl;
	cout << "Base �U m_A = " << s.Base::m_A << endl;

	// 2. �q�L���W�X��
	cout << "�q�L���W�X��: " << endl;
	cout << "Son �U m_A = " << Son::m_A << endl;
	// �Ĥ@�� :: �N��q�L���W�覡�X��  �ĤG�� :: �N��X�ݤ����@�ΰ�U
	cout << "Base �U m_A = " << Son::Base::m_A << endl;
}


// �P�W�R�A�������
void test02()
{
	// 1. �q�L��H�X��
	cout << "�q�L��H�X��" << endl;
	Son s;
	s.func();
	s.Base::func();

	// 2. �q�L���W�X��
	cout << "�q�L���W�X��" << endl;
	Son::func();
	Son::Base::func();

	// �l���X�{�M�����P�W�R�A�������, �]�|���ä������Ҧ��P�W�������
	// �p�G�Q�X�ݤ������Q���æP�W����, �ݭn�[�@�ΰ�
	Son::Base::func(100);
}

int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}
