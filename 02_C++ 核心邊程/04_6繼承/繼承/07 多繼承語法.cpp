#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �h�~�ӻy�k

class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};


// �l�� �ݭn�~��Base1�MBaes2
// �y�k:  class �l��: �~�Ӥ覡 ����1, �~�Ӥ覡 ����2 ....
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}



	int m_C;
	int m_D;
};

void test01()
{
	Son s;
	
	cout << "sizeof Son = " << sizeof(s) << endl;
	// ��������X�{�P�W����, �ݭn�[�@�ΰ�Ϥ�
	cout << "Base1::m_A = " << s.Base1::m_A << endl;
	cout << "Base2::m_A = " << s.Base2::m_A << endl;
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
