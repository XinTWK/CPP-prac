#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		cout << "Person的構造函數調用" << endl;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "年齡為:  " << this->m_Age << endl;
	}

	~Person()
	{
		cout << "Person的析構函數調用" << endl;

	}

	int m_Age; // 年齡

};

// 智能指針類
class smartPointer
{
public:
	smartPointer(Person * person)
	{
		cout << "smartPoint構造函數調用" << endl;
		m_Person = person;
	}

	// 重載-> 符號
	Person* operator->()
	{
		return this->m_Person;
	}

	// 重載 * 符號
	Person& operator * ()
	{
		return *this->m_Person;

	}


	~smartPointer()
	{
		cout << "smartPointer析構函數調用" << endl;

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

	// 利用智能指針  託管new出來的對象, 不用在寫delete
	smartPointer sp(new Person(20));
	sp->showPerson(); // 本質調用應該是 sp->->showPerson();  編譯器簡化為 sp->showPerson();
	(*sp).showPerson();
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

