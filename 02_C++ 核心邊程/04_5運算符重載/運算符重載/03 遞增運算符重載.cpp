#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 重載遞增運算符

// 自定義整型

class MyInteger
{
	friend ostream & operator<< (ostream& cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	// 重載前置++運算符  返回引用是為了一直對一個數據進行遞增操作
	MyInteger& operator++ ()
	{
		// 先進行++運算
		m_Num++;

		// 再將自身做返回
		return *this;
	}


	// 重載後置++運算符  
	// void operator++ (int) int代表佔位參數, 可以用於區分前置和後置遞增
	MyInteger operator++ (int)
	{
		// 先  記錄當時結果
		MyInteger temp = *this;
		// 後  遞增
		m_Num++;
		// 最後將紀錄結果作返回
		return temp;
	}

private:
	int m_Num;

};

// 重載左移運算符
ostream & operator<< (ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;

	return cout;
}



void test01()
{
	MyInteger myint;

	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {

	//test01();
	test02();

	//int a = 0;

	//cout << ++(++a) << endl;
	//cout << a << endl;

	system("pause");

	return EXIT_SUCCESS;
}