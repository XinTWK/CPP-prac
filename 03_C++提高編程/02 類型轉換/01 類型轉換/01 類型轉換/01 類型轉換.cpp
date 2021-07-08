#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 1. 靜態類型轉換  static_cast
// 可以對內置數據類型轉換
// 可以對於父子之間的指標或引用轉換
	// 父 轉 子 失敗 向下類型轉換
	// 子 轉 父 成功
	// 如果發生多態 轉換總是安全的

// 2. 常數類型轉換  const_cast
	// 只能對指標和引用之間進行轉換

// 3. 重新解釋轉換  reinterpret_cast
	// 最不安全的轉換, 容易出錯, 不推薦



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

// 2. 動態類型轉換 dynamic_cast

void test03()
{
	char a = 'a';
	//double d = dynamic_cast<double>(a); // 內置數據類型 無法轉傳

}

class Base2 { virtual void func() {} };
class Son2 :public Base2 { virtual void func() {} };
class Other2 {};
void test04()
{
	Base2 * base = NULL;
	// 將 base 轉為 Son2 *   父 轉 子  不安全
	//Son2 * son = dynamic_cast<Son2 *>(base);  轉換失敗

	Son2 * son = NULL;

	// 將son 轉為 Base2 *  子 轉 父 安全
	Base2 * base2 = dynamic_cast<Base2 *>(son);

	// 將 base2 轉為 Other2*
	//Other2 * other = dynamic_cast<Other2*>(base2); // 轉換無效

	// 如果發生多態 轉換總是安全的
	Base2 * base3 = new Son2;
	// 將base3 轉為  Son2 *
	Son2 * son2 = dynamic_cast<Son2*>(base3);
}

// 2. const_cast  常數類型轉換
void test05()
{
	const int * p = NULL;
	int * pp = const_cast<int *>(p);

	const int * ppp = const_cast<const int *>(pp);

	int a = 10;
	int &b = a;

	const int & b_ref = const_cast<const int &>(b);

	// 注意: 只能對指標和引用之間進行轉換
	//const int a1 = 10;
	//int b1 = const_cast<int>(a1); // 轉換無效
}

// 4. reinterpret_cast
void test06()
{
	// 最不安全的轉換, 容易出錯, 不推薦
	int a = 10;
	int * p = reinterpret_cast<int *>(a);

	Base * base = NULL;
	Other * other = reinterpret_cast<Other*>(base);
}


int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

