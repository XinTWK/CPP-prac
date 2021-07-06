#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 普通函數與函數模板區別

// 1. 普通函數調用可以發生隱式類型轉換

// 2. 函數模板 用自動類型推導, 不可以發生隱式類型轉換

// 3. 函數模板 用顯示指定類型, 可以發生隱式類型轉換


// 普通函數
int myAdd01(int a,int b)
{
	return a + b;
}

// 函數模板
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}


void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c'; // a - 97  c - 99

	cout << myAdd01(a, c) << endl;

	// 自動類型推導 不會發生隱式類型轉換
	//cout << myAdd02(a, c) << endl;

	// 顯示指定類型 會發生隱式類型轉換
	cout << myAdd02<int>(a, c) << endl;
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

