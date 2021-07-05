//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		// this指針指向 被調用的成員函數所屬的對象
//		this->age = age;
//	}
//
//	Person& PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//
//		// this指向p2的指針, 而*this指向的就是p2這個對象本體
//		return *this;
//	}
//
//	int age;
//};
//
//// 1. 解決名稱衝突
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年齡為:  " << p1.age << endl;
//}
//
//
//// 2. 返回對象本身用 *this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	// 鏈式編程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "P2的年齡為:  " << p2.age << endl;
//}
//
//
//
//int main() {
//
//	//test01();
//
//	test02();
//
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}