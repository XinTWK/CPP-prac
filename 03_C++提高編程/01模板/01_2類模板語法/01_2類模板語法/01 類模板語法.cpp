#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>


// Ãþ¼ÒªO
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name: " << this->m_Name << "  age: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;

};

void test01()
{
	Person<string, int> p1("®]®©ªÅ", 999);
	p1.showPerson();


}






int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

