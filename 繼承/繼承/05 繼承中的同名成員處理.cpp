#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 繼承中同名成員處理
class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func()調用" << endl;
	}

		void func(int a)
	{
		cout << "Son - func(int a)調用" << endl;
	}

	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son - func()調用" << endl;
	}



	int m_A;
};

// 同名成員屬性處理
void test01()
{
	Son s;
	cout << "Son 下 m_A =  " << s.m_A << endl;
	// 如果通過子類對象 訪問到父類中同名成員, 需要加作用域
	cout << "Base 下 m_A =  " << s.Base::m_A << endl;
}

// 同名成員函數處理
void test02()
{
	Son s;

	s.func(); // 直接調用 調用是子類中的同名成員

	// 如何調用到父類中同名成員函數?
	s.Base::func();

	// 如果子類中出現和父類同名的成員函數, 子類的同名成員會隱藏調父類中所有同名成員函數
	// 如果想訪問到父類中被隱藏的同名成員函數, 需要加作用域
	s.Base::func(100);

}

int main() {

	//test01();
	test02();
	system("pause");

	return EXIT_SUCCESS;
}
