//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//// 常函數
//class Person
//{
//public:
//
//	// this指針的本質 是指針常量  指針的指向是不可以修改的
//	// Person * const this;
//	// 在成員函數後面加const, 修飾的是this指針, 讓指針指向的值也不可以修改
//	void showPerson() const
//	{
//		this->m_B = 100;
//		//this->m_A = 100;
//		//this = NULL; // this指針不可以修改指針的指向的
//	}
//
//	void func()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B; // 特殊變量, 即使在常函數中, 也可以修改這個值,加關鍵字mutable
//};
//
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
//// 常對象
//
//void test02()
//{
//	const Person p; // 在對向前加const, 變為常對象
//	//p.m_A = 100;
//	p.m_B = 100; // m_B是特殊值, 在常對象下也可以修改
//
//	// 常對象只能調用常函數
//	p.showPerson();
//	//p.func();  //常對象 不可以調用普通成員函數, 因為普通成員函數可以修改屬性
//}
//
//
//
//
//int main() {
//
//
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}