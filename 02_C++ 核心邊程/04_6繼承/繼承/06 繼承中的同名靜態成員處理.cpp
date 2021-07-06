#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 繼承中的同名靜態成員處理方式

class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}
};
 
int Base::m_A = 100;

class Son : public Base
 {
 public:
	 static int m_A;

	 static void func()
	 {
		 cout << "Son - static void func()" << endl;
	 }
 };

int Son::m_A = 200;


// 同名靜態成員屬性
void test01()
{
	// 1. 通過對象訪問
	cout << "通過對象訪問: " << endl;
	Son s;
	cout << "Son 下 m_A = " << s.m_A << endl;
	cout << "Base 下 m_A = " << s.Base::m_A << endl;

	// 2. 通過類名訪問
	cout << "通過類名訪問: " << endl;
	cout << "Son 下 m_A = " << Son::m_A << endl;
	// 第一個 :: 代表通過類名方式訪問  第二個 :: 代表訪問父類作用域下
	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
}


// 同名靜態成員函數
void test02()
{
	// 1. 通過對象訪問
	cout << "通過對象訪問" << endl;
	Son s;
	s.func();
	s.Base::func();

	// 2. 通過類名訪問
	cout << "通過類名訪問" << endl;
	Son::func();
	Son::Base::func();

	// 子類出現和父類同名靜態成員函數, 也會隱藏父類中所有同名成員函數
	// 如果想訪問父類中被隱藏同名成員, 需要加作用域
	Son::Base::func(100);
}

int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}
