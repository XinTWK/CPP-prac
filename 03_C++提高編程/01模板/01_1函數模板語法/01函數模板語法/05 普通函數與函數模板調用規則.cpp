#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ���q��ƻP��ƼҪO�եγW�h
// 1. �p�G��ƼҪO�M���q��Ƴ��i�H�ե�, �u���եδ��q���
// 2. �i�H�q�L�żҪO�ѼƦC�� �j��եΨ�ƼҪO
// 3. ��ƼҪO�i�H�o�ͨ�ƭ���
// 4. �p�G��ƼҪO�i�H���ͧ�n���ǰt, �u���եΨ�ƼҪO

void myPrint(int a, int b)
{
	cout << "�եδ��q���" << endl;
}


template<class T>
void myPrint(T a, T b)
{
	cout << "�եΨ�ƼҪO" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "�եέ����ҪO" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;

	//myPrint(a, b);

	// �q�L�żҪO�ѼƦC��, �j��եΨ�ƼҪO
	//myPrint<>(a, b);

	//myPrint(a, b, 100);

	// �p�G��ƼҪO���ͧ�n���ǰt, �u���եΨ�ƼҪO
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1, c2);
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

