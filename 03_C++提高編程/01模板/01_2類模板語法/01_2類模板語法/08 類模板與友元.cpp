// 建議全局函數做類內實現, 用法簡單, 而且編譯器可以直接識別

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// 通過全局函數  輸出Person訊息

// 提前讓編譯器知道Person類存在
template<class T1, class T2>
class Person;

// 類外實現
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "類外實現---姓名:  " << p.m_Name << " 年齡:  " << p.m_Age << endl;
}



template<class T1,class T2>
class Person
{
	// 全局函數  類內實現
	friend void printPerson(Person<T1,T2> p)
	{
		cout << "姓名:  " << p.m_Name << " 年齡:  " << p.m_Age << endl;
	}

	// 全局函數 類外實現
	// 加空模板參數列表
	// 如果全局函數 是類外實現, 需要讓編譯器提前知道這個函數的存在
	friend void printPerson2<>(Person<T1, T2> p);


public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};



// 1. 全局函數在類內實現
void test01()
{
	Person<string, int>p("Tom", 20);

	printPerson(p);

}

// 2. 全局函數在類外實現
void test02()
{
	Person<string, int>p("Jerry", 20);
	printPerson2(p);
}

int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

