

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 類模板中成員函數創建時機
// 類模板中成員函數在調用時才去創建

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};


template<class T>
class MyClass
{
public:

	T obj;

	// 類模板中的成員函數, 並不是一開始就創建的, 而是在模板調用時再生成
	void func1()
	{
		obj.showPerson1();
	}

	void vunc2()
	{
		obj.showPerson2();
	}
};


void test01()
{
	MyClass<Person2>m;
	//m.func1(); // 編譯會出錯, 說明函數調用才會去創建成員函數
	m.vunc2();
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

