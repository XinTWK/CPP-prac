#include"myString.h"

// 重載<<運算符
ostream& operator<< (ostream&cout, MyString & str)
{
	cout << str.pString;
	return cout;
}

// 重載>>運算符
istream& operator >> (istream& cin, MyString & str)
{
	// 先判斷堆區原來是否有數據, 如果有先清空
	if (str.pString != NULL)
	{
		delete[]str.pString;
		str.pString = NULL;
	}

	char buf[1024] = { 0 };
	cin >> buf;

	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);

	return cin;
}

// 有參構造
MyString::MyString(const char * str)
{
	//cout << "MyString的有參構造調用" << endl;
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);
}

// 拷貝構造
MyString::MyString(const MyString & str)
{
	//cout << "MyString的拷貝構造調用" << endl;

	this->pString = new char[strlen(str.pString) + 1];
	strcpy(this->pString, str.pString);
	this->m_Size = strlen(str.pString);
}

MyString & MyString::operator=(const char * str)
{
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);

	return *this;
}

MyString & MyString::operator=(const MyString & str)
{
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}

	this->pString = new char[strlen(str.pString) + 1];
	strcpy(this->pString, str.pString);
	this->m_Size = strlen(str.pString);

	return *this;
}

char & MyString::operator[](int pos)
{
	return this->pString[pos];
}

MyString MyString::operator+(const char * str)
{
	// 自身是abc   傳入的是 def
	int newSize = this->m_Size + strlen(str) + 1; // 計算拼接後的字符串開闢長度
	char * temp = new char[newSize];
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str);

	MyString newString(temp);

	delete[] temp;

	return newString;
}

MyString MyString::operator+(const MyString & str)
{
	int newSize = this->m_Size + strlen(str.pString) + 1; // 計算拼接後的字符串開闢長度
	char * temp = new char[newSize];
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str.pString);

	MyString newString(temp);
	delete[] temp;
	return newString;
}

bool MyString::operator==(const char * str)
{
	if (strcmp(this->pString, str) == 0)
	{
		return true;
	}
	return false;
}

bool MyString::operator==(const MyString & str)
{
	if (strcmp(this->pString, str.pString) == 0)
	{
		return true;
	}
	return false;
}

// 析構
MyString::~MyString()
{
	if (this->pString != NULL)
	{
		//cout << "MyString的析構函數調用" << endl;

		delete[]this->pString;
		this->pString = NULL;
	}

}
