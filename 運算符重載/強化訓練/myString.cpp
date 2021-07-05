#include"myString.h"

// ����<<�B���
ostream& operator<< (ostream&cout, MyString & str)
{
	cout << str.pString;
	return cout;
}

// ����>>�B���
istream& operator >> (istream& cin, MyString & str)
{
	// ���P�_��ϭ�ӬO�_���ƾ�, �p�G�����M��
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

// ���Ѻc�y
MyString::MyString(const char * str)
{
	//cout << "MyString�����Ѻc�y�ե�" << endl;
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);
}

// �����c�y
MyString::MyString(const MyString & str)
{
	//cout << "MyString�������c�y�ե�" << endl;

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
	// �ۨ��Oabc   �ǤJ���O def
	int newSize = this->m_Size + strlen(str) + 1; // �p������᪺�r�Ŧ�}�P����
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
	int newSize = this->m_Size + strlen(str.pString) + 1; // �p������᪺�r�Ŧ�}�P����
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

// �R�c
MyString::~MyString()
{
	if (this->pString != NULL)
	{
		//cout << "MyString���R�c��ƽե�" << endl;

		delete[]this->pString;
		this->pString = NULL;
	}

}
