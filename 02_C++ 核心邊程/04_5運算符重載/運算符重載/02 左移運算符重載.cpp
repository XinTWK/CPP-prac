#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


// �����B��ŭ���

class Person
{

	friend ostream& operator<<(ostream &out, Person &p);

public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	// �Q�Φ�����ƭ��� �����B���  p.operator<<(cout)  ²�ƪ��� p << cout
	// ���|�Q�Φ�����ƭ���<<�B���, �]���L�k��{ cout�b����
	//void operator<<(Person &p)
	//{

	//}

	int m_A;
	int m_B;
};

// �u��Q�Υ�����ƭ��������B���
ostream& operator<<(ostream &out, Person &p) // ���� operator<< (cout,p)
{
	out << "m_A = " << p.m_A << "  m_B = " << p.m_B;
	return out;
}


void test01()
{
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;

	cout << p << " hello world" << endl;
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}