#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// ���ҪO�P��ƼҪO�ϧO
template<class NameType,class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name:  " << this->m_Name << " age: " << this->m_Age << endl;


	}

	NameType m_Name;
	AgeType m_Age;


};


// 1. ���ҪO�S���۰��������ɨϥΤ覡
void test01()
{

	//Person p("�]����", 1000);  ���~, �L�k�Φ۰���������

	Person<string, int>p("�]����", 1000); // ���T, �u�����ܫ��w����

	p.showPerson();


}


//2. ���ҪO�b�ҪO�ѼƦC���i�H���q�{�Ѽ�
void test02()
{
	Person<string>p("�ޤK��", 999);

	p.showPerson();
}



int main() {

	test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

