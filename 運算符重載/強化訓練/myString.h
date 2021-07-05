#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// и才﹃摸
class MyString
{
	friend ostream& operator<< (ostream&cout, MyString & str);
	friend istream& operator>> (istream& cin, MyString & str);
public:
	// 篶硑ㄧ计
	MyString(const char * str); // MyString str = "abcd";
	// ī篶硑
	MyString(const MyString & str); // MyString str2 = str;

	// 更 = 
	MyString& operator= (const char * str);
	MyString& operator= (const MyString & str);

	// 更 []
	char& operator[] (int pos);

	// 更 +
	MyString operator+ (const char * str);
	MyString operator+ (const MyString& str);

	// 更 ==
	bool operator== (const char* str);
	bool operator== (const MyString& str);




	// 猂篶
	~MyString();
private:
	char * pString; // 蝴臔┏糷帮跋秨臥才皚
	int m_Size; // 才﹃ ぃ璸衡\0
};

