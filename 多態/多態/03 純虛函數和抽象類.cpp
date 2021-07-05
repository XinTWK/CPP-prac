//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//// 純虛函數和抽象類
//class Base
//{
//public:
//
//	// 純虛函數
//	// 只要有一個純虛函數, 這個類稱為抽象類
//	// 抽象類特點:
//	// 1. 無法實例化對象
//	// 2. 抽象類的子類  必須要重寫父類中的純虛函數, 否則也屬於抽象類
//	virtual void func() = 0;
//
//};
//
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func函數調用" << endl;
//	};
//};
//
//void test01()
//{
//	//Base b;   // 抽象類是無法實例化對象
//	//new Base; // 抽象類是無法實例化對象
//
//	//Son s; // 子類必須重寫父類中的純虛函數, 否則無法實例化對象
//	
//	Base * base = new Son;
//	base->func();
//
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
