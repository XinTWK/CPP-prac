#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 1. 靜態類型轉換  static_cast
// 可以對內置數據類型轉換
// 可以對於父子之間的指標或引用轉換


void test01()
{
	// 對於內置數據類型轉換
	// 語法:  static_cast<目標類型>(原變量/對象);
	char a = 'a';
	double d = static_cast<double>(a);
	cout << d << endl;
}

class Base{};
class Son:public Base{};
class Other{};

void test02()
{
	Base * base = NULL;
	// 將base 轉為 Son *  父 轉 子  不安全
	Son * son = static_cast<Son *>(base);

	// 將 son 轉為 Base * 子 轉 父  安全
	Base * base2 = static_cast<Base *>(son);


	// 將base2 轉為 Other *  無效轉換
	//Other * other = static_cast<Other *>(base2);
}


int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

