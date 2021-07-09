#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<memory>

// ���`���򥻻y�k
// ���`���T������r try caych theow


// ���`�]�i�H�O�ۭq�q����
class myException
{
public:
	void printError()
	{
		cout << "�ڦۤv�����`" << endl;
	}
	};
class Person
{
public:
	Person()
	{
		cout << "Person���c�y�ե�" << endl;
	}

	~Person()
	{
		cout << "Person���R�c�ե�" << endl;
	}
};

int myDivision(int a,int b)
{
	if (b == 0)
	{
		//return -1; // C�y����^�ȥu���@��, �L�k�Ϥ�, �i��X�{�G�q��, �䦸�S���Τ@���лx

		//throw 1;    // �ߥX�@��int���`
		//throw 3.14; // �ߥX�@��double���`
		//throw 'a';  // �ߥX�@��char���`

		// �̸ѱ�: �qtry�}�l�_, ��throw�ߥX���`�e, �̤W���ƾڷ|�۰�����, ���񪺶��ǩM�Ыت����Ǭۤ�
		Person p1;
		Person p2;

		auto_ptr<Person> p3(new Person); // C++98�з�

		// C++11�з�
		unique_ptr<Person> p4(new Person); // #include <memory>

		throw myException();  // �ߥX�@�� myException�ΦW�����`��H
	}
	return a / b;
}


void test01()
{
	int a = 10;
	int b = 0;

	// �b�i��X�{���`���a�� �g��try��
	try
	{
		int ret = myDivision(a, b);

	}
	catch (int)
	{
		cout << "int�������`����" << endl;
	}
	catch (double)
	{
		// �p�G����쪺���`, ���Q�h�B�z, �Q�~��ߥX, �i�H�Q������r throw
		throw;
		cout << "double�������`����" << endl;
	}
	catch (myException e)
	{
		e.printError();
	}
	catch (...)
	{
		cout << "��L�������`����" << endl;
	}
}

int main() {

	try
	{
		test01();

	}

	catch(int)
	{
		cout << "�bmain��Ƥ�,int�������`����" << endl;
	}
	catch (...)
	{
		cout << "�bmain��Ƥ�,��L�������`����" << endl;
	}

	// �p�G�{�����S������a��h�B�z���`, �t�η|�۰ʽե�terminate���, �ϵ{���פ�

	system("pause");

	return EXIT_SUCCESS;
}

