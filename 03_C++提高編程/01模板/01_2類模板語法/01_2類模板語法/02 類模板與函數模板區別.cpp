#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// 類模板與函數模板區別
template<class NameType,class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name:  " << this->m_Name << " age: " << this->m_Age << endl;


	}

	NameType m_Name;
	AgeType m_Age;


};


// 1. 類模板沒有自動類型推導使用方式
void test01()
{

	//Person p("孫悟空", 1000);  錯誤, 無法用自動類型推倒

	Person<string, int>p("孫悟空", 1000); // 正確, 只能用顯示指定類型

	p.showPerson();


}


//2. 類模板在模板參數列表中可以有默認參數
void test02()
{
	Person<string>p("豬八戒", 999);

	p.showPerson();
}



int main() {

	test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

