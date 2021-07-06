#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		cout << "Person���c�y��ƽե�" << endl;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "�~�֬�:  " << this->m_Age << endl;
	}

	~Person()
	{
		cout << "Person���R�c��ƽե�" << endl;

	}

	int m_Age; // �~��

};

// ������w��
class smartPointer
{
public:
	smartPointer(Person * person)
	{
		cout << "smartPoint�c�y��ƽե�" << endl;
		m_Person = person;
	}

	// ����-> �Ÿ�
	Person* operator->()
	{
		return this->m_Person;
	}

	// ���� * �Ÿ�
	Person& operator * ()
	{
		return *this->m_Person;

	}


	~smartPointer()
	{
		cout << "smartPointer�R�c��ƽե�" << endl;

		if (this->m_Person != NULL)
		{
			delete this->m_Person;
			this->m_Person = NULL;
		}
	}

	Person * m_Person;
};

void test01()
{
	//Person * p1 = new Person(20);
	//p1->showPerson();
	//(*p1).showPerson();

	// �Q�δ�����w  �U��new�X�Ӫ���H, ���Φb�gdelete
	smartPointer sp(new Person(20));
	sp->showPerson(); // ����ե����ӬO sp->->showPerson();  �sĶ��²�Ƭ� sp->showPerson();
	(*sp).showPerson();
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

