#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �Ĥ@�ظѨM�覡, �����]�t ��l���
//#include"person.cpp"

// �ĤG�ظѨM�覡, �N.h�M.cpp�������e�g�b�@�_, �N���W�אּ,hpp���  �D�y
#include"person.hpp"

// ���ҪO�����s�g���D�H�θѨM
//#include <string>
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//
//template<class T1, class T2>
//void  Person<T1, T2>::showPerson()
//{
//	cout << "�m�W:  " << this->m_Name << " �~��: " << this->m_Age << endl;
//}

void test01()
{
	Person <string, int>p("Jerry", 18);
	p.showPerson();

}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

