#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"myString.h"

void test01()
{
	MyString str1 = "abc";
	MyString str2 = str1;

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;

	cout << "請重新給str1賦值" << endl;
	cin >> str1;
	cout << "str1 = " << str1 << endl;
}

void test02()
{
	MyString str1 = "abc";
	MyString str2 = "def";

	str1 = str2;
	cout << "str1 = " << str1 << endl;
	str1 = "ghi";
	cout << "str1 = " << str1 << endl;
}

void test03()
{
	MyString str1 = "abc";
	cout << "str1[o] = " << str1[0] << endl;


	str1[0] = 'z';
	cout << "第一個字符改為z之後str1的結果為" << endl;
	cout << "str1 = " << str1 << endl;

}


void test04()
{
	MyString str1 = "abc";
	MyString str2 = "def";
	MyString str3 = str1 + str2;
	MyString str4 = str1 + "def";
	cout << "str3 = " << str3 << endl;
	cout << "str14= " << str4 << endl;
}

void test05()
{
	MyString str1 = "abc";
	MyString str2 = "abcd";

	if (str1 == str2)
	{
		cout << "str1 == str2" << endl;
	}
	else
	{
		cout << "str1 != str2" << endl;
	}

	if (str1 == "abc")
	{
		cout << "str1 == abc" << endl;
	}
	else
	{
		cout << "str1 != abc" << endl;
	}
}

int main() {

	test05();

	//char buf[64] = { 0 };
	//char buf2[64] = { 0 };
	//cin >> buf>>buf2;

	//cout << buf << endl;
	//cout << buf2 << endl;

	system("pause");

	return EXIT_SUCCESS;
}

