#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ���q��ƻP��ƼҪO�ϧO

// 1. ���q��ƽեΥi�H�o�����������ഫ

// 2. ��ƼҪO �Φ۰���������, ���i�H�o�����������ഫ

// 3. ��ƼҪO ����ܫ��w����, �i�H�o�����������ഫ


// ���q���
int myAdd01(int a,int b)
{
	return a + b;
}

// ��ƼҪO
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}


void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c'; // a - 97  c - 99

	cout << myAdd01(a, c) << endl;

	// �۰��������� ���|�o�����������ഫ
	//cout << myAdd02(a, c) << endl;

	// ��ܫ��w���� �|�o�����������ഫ
	cout << myAdd02<int>(a, c) << endl;
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

