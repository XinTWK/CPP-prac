//#include<iostream>
//using namespace std;
//
//// 構造函數的調用規則
//// 1. 創建一個類, C++編譯器會給每個類都添加至少3個函數
//// 默認構造   (空實現)
//// 析構函數   (空實現)
//// 拷貝構造	  (值拷貝)
//
//
//
//// 2. 
//// 如果我們寫了有參構造函數, 編譯器就不再提供默認構造, 依然提供拷貝構造
//// 如果我們寫了拷貝構造函數, 編譯器就不再提供其他普通構造函數了
//class Person
//{
//public:
//
//	Person()
//	{
//		cout << "Person的默認構造函數調用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person的有參構造函數調用" << endl;
//		m_Age = age;
//	}
//
//	Person(const Person & p)
//	{
//		cout << "Person的拷貝構造函數調用" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person的析構函數調用" << endl;
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "p2的年齡為:  " << p2.m_Age << endl;
//}
//
//void test02()
//{
//	Person p(28);
//
//	Person p2(p);
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