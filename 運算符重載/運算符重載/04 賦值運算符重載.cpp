#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 賦值運算符重載

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

	// 重載  賦值運算符
	Person& operator= (Person &p)
	{
		// 編譯器是提供淺拷貝
		//m_Age = p.m_Age;

		// 應該先判對是否有屬性在堆區, 如果有先釋放乾淨, 然後在深拷貝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		// 深拷貝
		m_Age = new int(*p.m_Age);

		// 返回對象本身
		return *this;
	}

	int *m_Age;
};

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1; // 賦值操作

	cout << "p1的年齡為:  " << *p1.m_Age << endl;
	cout << "p2的年齡為:  " << *p2.m_Age << endl;
	cout << "p3的年齡為:  " << *p3.m_Age << endl;


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

