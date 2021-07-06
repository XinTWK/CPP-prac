#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �ڪ��r�Ŧ���
class MyString
{
	friend ostream& operator<< (ostream&cout, MyString & str);
	friend istream& operator>> (istream& cin, MyString & str);
public:
	// �c�y���
	MyString(const char * str); // MyString str = "abcd";
	// �����c�y
	MyString(const MyString & str); // MyString str2 = str;

	// ���� = 
	MyString& operator= (const char * str);
	MyString& operator= (const MyString & str);

	// ���� []
	char& operator[] (int pos);

	// ���� +
	MyString operator+ (const char * str);
	MyString operator+ (const MyString& str);

	// ���� ==
	bool operator== (const char* str);
	bool operator== (const MyString& str);




	// �R�c
	~MyString();
private:
	char * pString; // ���@���h��϶}�P���r�Ű}�C
	int m_Size; // �r�Ŧ���� ���p��\0
};

