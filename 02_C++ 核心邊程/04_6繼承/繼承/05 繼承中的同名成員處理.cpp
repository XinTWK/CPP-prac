#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �~�Ӥ��P�W�����B�z
class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func()�ե�" << endl;
	}

		void func(int a)
	{
		cout << "Son - func(int a)�ե�" << endl;
	}

	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son - func()�ե�" << endl;
	}



	int m_A;
};

// �P�W�����ݩʳB�z
void test01()
{
	Son s;
	cout << "Son �U m_A =  " << s.m_A << endl;
	// �p�G�q�L�l����H �X�ݨ�������P�W����, �ݭn�[�@�ΰ�
	cout << "Base �U m_A =  " << s.Base::m_A << endl;
}

// �P�W������ƳB�z
void test02()
{
	Son s;

	s.func(); // �����ե� �եάO�l�������P�W����

	// �p��եΨ�������P�W�������?
	s.Base::func();

	// �p�G�l�����X�{�M�����P�W���������, �l�����P�W�����|���ýդ������Ҧ��P�W�������
	// �p�G�Q�X�ݨ�������Q���ê��P�W�������, �ݭn�[�@�ΰ�
	s.Base::func(100);

}

int main() {

	//test01();
	test02();
	system("pause");

	return EXIT_SUCCESS;
}
