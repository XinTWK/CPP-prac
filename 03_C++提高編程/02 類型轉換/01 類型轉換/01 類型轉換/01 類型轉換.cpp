#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 1. �R�A�����ഫ  static_cast
// �i�H�鷺�m�ƾ������ഫ
// �i�H�����l���������ЩΤޥ��ഫ


void test01()
{
	// ��󤺸m�ƾ������ഫ
	// �y�k:  static_cast<�ؼ�����>(���ܶq/��H);
	char a = 'a';
	double d = static_cast<double>(a);
	cout << d << endl;
}

class Base{};
class Son:public Base{};
class Other{};

void test02()
{
	Base * base = NULL;
	// �Nbase �ର Son *  �� �� �l  ���w��
	Son * son = static_cast<Son *>(base);

	// �N son �ର Base * �l �� ��  �w��
	Base * base2 = static_cast<Base *>(son);


	// �Nbase2 �ର Other *  �L���ഫ
	//Other * other = static_cast<Other *>(base2);
}


int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

