#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stdexcept>

// �s�g�ۤv�����`��
	// const char * �i�H�����ରstring
	// string ���i�H�����ഫ const char *
	// string �� const char *  ��.c_str();

// �ڪ����`��
class MyOutOfRange : public exception
{
public:

	MyOutOfRange(const char * errInfo)
	{
		this->m_ErrInfo = errInfo; // const char * �i�H�����ഫ��string
	}

	MyOutOfRange(const string&  errInfo)
	{
		this->m_ErrInfo = errInfo;
	}
	virtual  const char * what() const
	{
		// string �ഫ�� const char *
		// �Q��.c_str();
		return this->m_ErrInfo.c_str(); // string ���i�H�����ഫ const char *
	}

	string m_ErrInfo; // �O�����~���ܪ��T��

};

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age>150)
		{
			//throw out_of_range("�~�֥����b0~150����");
			throw MyOutOfRange("�ڪ����` - �~�֥����b0~150����");
		}
		else
		{
			this->m_Age = age;
		}
	}

	int m_Age;
};

void test01()
{
	try
	{
		Person p(1000);
	}
	catch (exception & e)
	{
		cout << e.what() << endl;
	}
}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
