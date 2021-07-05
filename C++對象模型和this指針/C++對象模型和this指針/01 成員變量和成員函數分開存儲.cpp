//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//// 成員變量 和 成員函數 分開存儲的
//
//class Person
//{
//	int m_A; // 非靜態成員變量 屬於類的對象上
//
//	static int m_B; // 靜態成員變量 不屬於類的對象上
//
//	void func(){} // 非靜態成員函數 不屬於類的對象上
//
//	static void func2(){} // 靜態成員函數 不屬於類的對象上
//};
//
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//	// 空對象占用的內存空間為: 1
//	// C++編譯器會給每個空對象也分配一個字節空間,  是為了區分空對象佔內存的位置
//	// 每個空對象也應該有一個獨一無二的內存地址
//	cout << "size of p =  " << sizeof(p) << endl;
//
//}
//
//void test02()
//{
//	Person p;
//	cout << "size of p =  " << sizeof(p) << endl;
//}
//
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