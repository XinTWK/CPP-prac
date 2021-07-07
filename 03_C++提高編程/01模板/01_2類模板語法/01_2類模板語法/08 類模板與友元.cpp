// ��ĳ������ư�������{, �Ϊk²��, �ӥB�sĶ���i�H�����ѧO

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// �q�L�������  ��XPerson�T��

// ���e���sĶ�����DPerson���s�b
template<class T1, class T2>
class Person;

// ���~��{
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "���~��{---�m�W:  " << p.m_Name << " �~��:  " << p.m_Age << endl;
}



template<class T1,class T2>
class Person
{
	// �������  ������{
	friend void printPerson(Person<T1,T2> p)
	{
		cout << "�m�W:  " << p.m_Name << " �~��:  " << p.m_Age << endl;
	}

	// ������� ���~��{
	// �[�żҪO�ѼƦC��
	// �p�G������� �O���~��{, �ݭn���sĶ�����e���D�o�Ө�ƪ��s�b
	friend void printPerson2<>(Person<T1, T2> p);


public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};



// 1. ������Ʀb������{
void test01()
{
	Person<string, int>p("Tom", 20);

	printPerson(p);

}

// 2. ������Ʀb���~��{
void test02()
{
	Person<string, int>p("Jerry", 20);
	printPerson2(p);
}

int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

