#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ��ƼҪO�`�N�ƶ�

template<typename T> // typename �i�H������ class
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

// 1. �۰���������, �������ɥX�@�P���ƾ�����T�~�i�H�ϥ�
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	//mySwap(a, b); // ���T!
	//mySwap(a, c); // ���~! ���ˤ��X�@�P��T����


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


}

// 2. �ҪO�����n�T�w�XT���ƾ�����, �~�i�H�ϥ�
template<class T>
void func()
{
	cout << "func��ƽե�" << endl;
}

void test02()
{
	func<int>();

}

int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

