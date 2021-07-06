#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// ���ҪO��H����ưѼ�

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "�m�W:  " << this->m_Name << " �~��: " << this->m_Age << endl;

	}

	T1 m_Name;
	T2 m_Age;
};

// 1. ���w�ǤJ����  �̱`��
void printPerson1(Person<string, int>&p)
{
	p.showPerson();
}


void test01()
{
	Person<string, int>p("�]����", 100);
	printPerson1(p);
}

// 2. �ѼƼҪO��
template<class T1,class T2>
void printPerson2(Person<T1, T2>&p)
{
	p.showPerson();
	//cout << "T1 ��������:  " << typeid(T1).name() << endl;
	//cout << "T2 ��������:  " << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int>p("�ޤK��", 90);
	printPerson2(p);
}

// 3. ������ҪO��
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T���ƾ�������:  " << typeid(T).name() << endl;
}

void test03()
{
	Person<string, int>p("��", 30);
	printPerson3(p);
	
}


int main() {

	test01();
	test02();
	test03();

	system("pause");

	return EXIT_SUCCESS;
}

