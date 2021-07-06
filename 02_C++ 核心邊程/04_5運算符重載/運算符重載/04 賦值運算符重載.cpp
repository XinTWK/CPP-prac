#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ��ȹB��ŭ���

class Person
{
public:

	Person(int age)
	{
		m_Age = new int(age);
	}

	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	// ����  ��ȹB���
	Person& operator= (Person &p)
	{
		// �sĶ���O���ѲL����
		//m_Age = p.m_Age;

		// ���ӥ��P��O�_���ݩʦb���, �p�G�������񰮲b, �M��b�`����
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		// �`����
		m_Age = new int(*p.m_Age);

		// ��^��H����
		return *this;
	}

	int *m_Age;
};

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1; // ��Ⱦާ@

	cout << "p1���~�֬�:  " << *p1.m_Age << endl;
	cout << "p2���~�֬�:  " << *p2.m_Age << endl;
	cout << "p3���~�֬�:  " << *p3.m_Age << endl;


}

int main() {

	test01();

	int a = 10;
	int b = 20;
	int c = 30;

	c = b = a;

	cout << "b= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;


	system("pause");

	return EXIT_SUCCESS;
}

