#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ���q��{����

// Java����
//class Java
//{
//public:
//	void header()
//	{
//		cout << "����, ���}��, �n��, ���U.... (���@�Y��)" << endl;
//	}
//	void footer()
//	{
//		cout << "���U����, ��y�X�@, �����a��... (���@����)" << endl;
//	}
//	void left()
//	{
//		cout << "Java, Python, C++..... (���@�����C��)" << endl;
//	}
//	void content()
//	{
//		cout << "Java�Ǭ�v��" << endl;
//	}
//};
//
//// Python����
//class Python
//{
//public:
//	void header()
//	{
//		cout << "����, ���}��, �n��, ���U.... (���@�Y��)" << endl;
//	}
//	void footer()
//	{
//		cout << "���U����, ��y�X�@, �����a��... (���@����)" << endl;
//	}
//	void left()
//	{
//		cout << "Java, Python, C++..... (���@�����C��)" << endl;
//	}
//	void content()
//	{
//		cout << "Python�Ǭ�v��" << endl;
//	}
//};
//
//// C++ ����
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "����, ���}��, �n��, ���U.... (���@�Y��)" << endl;
//	}
//	void footer()
//	{
//		cout << "���U����, ��y�X�@, �����a��... (���@����)" << endl;
//	}
//	void left()
//	{
//		cout << "Java, Python, C++..... (���@�����C��)" << endl;
//	}
//	void content()
//	{
//		cout << "C++�Ǭ�v��" << endl;
//	}
//};

// �~�ӹ�{����

// ���@������
class BasePage
{
public:
	void header()
	{
		cout << "����, ���}��, �n��, ���U.... (���@�Y��)" << endl;
	}
	void footer()
	{
		cout << "���U����, ��y�X�@, �����a��... (���@����)" << endl;
	}
	void left()
	{
		cout << "Java, Python, C++..... (���@�����C��)" << endl;
	}

};

// �~�Ӫ��n�B: ��֭��Ƶ{���X
// �y�k:  class  �l��:  �~�Ӥ覡  ����
// �l��  �]�٬�  ������
// ����  �]�٬�  ����

// Java ����
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java�Ǭ�v��" << endl;
	}
};

// Python ����
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python�Ǭ�v��" << endl;
	}
};

// C++ ����
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++�Ǭ�v��" << endl;
	}
};


	void test01()
	{
		cout << "Java�U���v���p�U:  " << endl;
		Java ja;
		ja.header();
		ja.footer();
		ja.left();
		ja.content();

		cout << "------------------------------------" << endl;

		cout << "Python�U���v���p�U:  " << endl;
		Python py;
		py.header();
		py.footer();
		py.left();
		py.content();

		cout << "------------------------------------" << endl;

		cout << "C++�U���v���p�U:  " << endl;
		CPP cpp;
		cpp.header();
		cpp.footer();
		cpp.left();
		cpp.content();
	}


	int main() {

		test01();

		system("pause");

		return EXIT_SUCCESS;
	}

