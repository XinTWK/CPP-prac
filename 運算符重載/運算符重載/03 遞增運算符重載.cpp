#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �������W�B���

// �۩w�q�㫬

class MyInteger
{
	friend ostream & operator<< (ostream& cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	// �����e�m++�B���  ��^�ޥάO���F�@����@�Ӽƾڶi�滼�W�ާ@
	MyInteger& operator++ ()
	{
		// ���i��++�B��
		m_Num++;

		// �A�N�ۨ�����^
		return *this;
	}


	// ������m++�B���  
	// void operator++ (int) int�N�����Ѽ�, �i�H�Ω�Ϥ��e�m�M��m���W
	MyInteger operator++ (int)
	{
		// ��  �O����ɵ��G
		MyInteger temp = *this;
		// ��  ���W
		m_Num++;
		// �̫�N�������G�@��^
		return temp;
	}

private:
	int m_Num;

};

// ���������B���
ostream & operator<< (ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;

	return cout;
}



void test01()
{
	MyInteger myint;

	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {

	//test01();
	test02();

	//int a = 0;

	//cout << ++(++a) << endl;
	//cout << a << endl;

	system("pause");

	return EXIT_SUCCESS;
}