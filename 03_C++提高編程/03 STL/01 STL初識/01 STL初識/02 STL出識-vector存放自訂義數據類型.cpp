#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<string>

// vector容器中存放自訂義數據類型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	vector<Person>v;

	Person p1("aaa",10);
	Person p2("bbb",10);
	Person p3("ccc",10);
	Person p4("ddd",10);
	Person p5("eee",10);

	// 向容器中添加數據
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	// 遍歷容器中的數據
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "姓名:  " << (*it).m_Name << " 年齡:  " << (*it).m_Age << endl;
		cout << "姓名:  " << it->m_Name << " 年齡:  " << it->m_Age << endl;
	}
}

// 存放自訂義數據類型  指針
void test02()
{
	vector<Person*>v;

	Person p1("aaa", 10);
	Person p2("bbb", 10);
	Person p3("ccc", 10);
	Person p4("ddd", 10);
	Person p5("eee", 10);

	// 向容器中添加數據
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	// 遍歷容器
	for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名:  " << (*it)->m_Name << " 年齡:  " << (*it)->m_Age << endl;
	
	}



}


int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

