#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 多繼承語法

class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};


// 子類 需要繼承Base1和Baes2
// 語法:  class 子類: 繼承方式 父類1, 繼承方式 父類2 ....
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}



	int m_C;
	int m_D;
};

void test01()
{
	Son s;
	
	cout << "sizeof Son = " << sizeof(s) << endl;
	// 當父類中出現同名成員, 需要加作用域區分
	cout << "Base1::m_A = " << s.Base1::m_A << endl;
	cout << "Base2::m_A = " << s.Base2::m_A << endl;
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
