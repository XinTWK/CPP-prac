//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
//// 函數調用運算符重載
//
//// 打印輸出類
//class MyPrint
//{
//public:
//
//	// 重載函數調用運算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//};
//	
//void MyPrint02(string test)
//{
//	cout << test << endl;
//
//}
//
//void test01()
//{
//	MyPrint myPrint;
//
//	myPrint("hello world");  // 由於使用起來非常類似於函數調用, 因此被稱為仿函數
//	
//	MyPrint02("hello world");
//}
//
//// 仿函數非常靈活, 沒有固定的寫法
//// 加法類
//
//class MyAdd
//{
//public:
//
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test02()
//{
//	MyAdd myadd;
//	int ret = myadd(100, 100);
//	cout << "ret = " << ret << endl;
//
//	// 匿名函數對象
//	cout << MyAdd()(100, 100) << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
//
