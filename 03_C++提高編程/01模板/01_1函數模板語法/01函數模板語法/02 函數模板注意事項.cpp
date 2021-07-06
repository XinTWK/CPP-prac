#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 函數模板注意事項

template<typename T> // typename 可以替換成 class
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

// 1. 自動類型推導, 必須推導出一致的數據類型T才可以使用
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	//mySwap(a, b); // 正確!
	//mySwap(a, c); // 錯誤! 推倒不出一致的T類型


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


}

// 2. 模板必須要確定出T的數據類型, 才可以使用
template<class T>
void func()
{
	cout << "func函數調用" << endl;
}

void test02()
{
	func<int>();

}

int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

