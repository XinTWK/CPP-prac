#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stdexcept> // std �з�  except ���`

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age>150)
		{
			throw out_of_range("�~�֥����b0~150����");
		}
		else
		{
			this->m_Age = age;
		}
	}

	int m_Age;
};

void test01()
{
	try
	{
		Person p(1000);
	}
	catch (exception & e)
	{
		cout<<e.what()<<endl;
	}
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
