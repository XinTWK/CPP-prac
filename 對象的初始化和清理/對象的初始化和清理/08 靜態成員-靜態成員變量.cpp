//#include<iostream>
//using namespace std;
//
//// 靜態成員變量
//class Person
//{
//public:
//
//	// 1.所有對象都共享同一份數據
//	// 2.編譯階段就分配內存
//	// 3.類內聲明, 類外初始化操作
//	static int m_A;
//
//	// 靜態成員變量也是有訪問權限的
//private:
//	static int m_B;
//	
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
//void test01()
//{
//	Person p;
//	// 100
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	//200
//	cout << p.m_A << endl;
//
//}
//
//void test02()
//{
//	// 靜態成員變量 不屬於某個對象上, 所有對象都共享同一份數據
//	// 因此靜態成員變量有兩種訪問方式
//
//	// 1. 通過對象進行訪問
//	//Person p;
//	//cout << p.m_A << endl;
//
//
//	// 2. 通過類名進行訪問
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl;  類外訪問不到私有靜態成員變量
//
//
//}
//
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}