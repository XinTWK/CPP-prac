#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stdexcept>

// 編寫自己的異常類
	// const char * 可以隱式轉為string
	// string 不可以隱式轉換 const char *
	// string 轉 const char *  用.c_str();

// 我的異常類
class MyOutOfRange : public exception
{
public:

	MyOutOfRange(const char * errInfo)
	{
		this->m_ErrInfo = errInfo; // const char * 可以隱式轉換為string
	}

	MyOutOfRange(const string&  errInfo)
	{
		this->m_ErrInfo = errInfo;
	}
	virtual  const char * what() const
	{
		// string 轉換為 const char *
		// 利用.c_str();
		return this->m_ErrInfo.c_str(); // string 不可以隱式轉換 const char *
	}

	string m_ErrInfo; // 記錄錯誤提示的訊息

};

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age>150)
		{
			//throw out_of_range("年齡必須在0~150之間");
			throw MyOutOfRange("我的異常 - 年齡必須在0~150之間");
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
		cout << e.what() << endl;
	}
}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
