#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 1. �R�A�����ഫ  static_cast
// �i�H�鷺�m�ƾ������ഫ
// �i�H�����l���������ЩΤޥ��ഫ
	// �� �� �l ���� �V�U�����ഫ
	// �l �� �� ���\
	// �p�G�o�ͦh�A �ഫ�`�O�w����

// 2. �`�������ഫ  const_cast
	// �u�����ЩM�ޥΤ����i���ഫ

// 3. ���s�����ഫ  reinterpret_cast
	// �̤��w�����ഫ, �e���X��, ������



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

// 2. �ʺA�����ഫ dynamic_cast

void test03()
{
	char a = 'a';
	//double d = dynamic_cast<double>(a); // ���m�ƾ����� �L�k���

}

class Base2 { virtual void func() {} };
class Son2 :public Base2 { virtual void func() {} };
class Other2 {};
void test04()
{
	Base2 * base = NULL;
	// �N base �ର Son2 *   �� �� �l  ���w��
	//Son2 * son = dynamic_cast<Son2 *>(base);  �ഫ����

	Son2 * son = NULL;

	// �Nson �ର Base2 *  �l �� �� �w��
	Base2 * base2 = dynamic_cast<Base2 *>(son);

	// �N base2 �ର Other2*
	//Other2 * other = dynamic_cast<Other2*>(base2); // �ഫ�L��

	// �p�G�o�ͦh�A �ഫ�`�O�w����
	Base2 * base3 = new Son2;
	// �Nbase3 �ର  Son2 *
	Son2 * son2 = dynamic_cast<Son2*>(base3);
}

// 2. const_cast  �`�������ഫ
void test05()
{
	const int * p = NULL;
	int * pp = const_cast<int *>(p);

	const int * ppp = const_cast<const int *>(pp);

	int a = 10;
	int &b = a;

	const int & b_ref = const_cast<const int &>(b);

	// �`�N: �u�����ЩM�ޥΤ����i���ഫ
	//const int a1 = 10;
	//int b1 = const_cast<int>(a1); // �ഫ�L��
}

// 4. reinterpret_cast
void test06()
{
	// �̤��w�����ഫ, �e���X��, ������
	int a = 10;
	int * p = reinterpret_cast<int *>(a);

	Base * base = NULL;
	Other * other = reinterpret_cast<Other*>(base);
}


int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

