#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 第一種解決方式, 直接包含 原始文件
//#include"person.cpp"

// 第二種解決方式, 將.h和.cpp中的內容寫在一起, 將後綴名改為,hpp文件  主流
#include"person.hpp"

// 類模板分文件編寫問題以及解決
//#include <string>
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//
//template<class T1, class T2>
//void  Person<T1, T2>::showPerson()
//{
//	cout << "姓名:  " << this->m_Name << " 年齡: " << this->m_Age << endl;
//}

void test01()
{
	Person <string, int>p("Jerry", 18);
	p.showPerson();

}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

