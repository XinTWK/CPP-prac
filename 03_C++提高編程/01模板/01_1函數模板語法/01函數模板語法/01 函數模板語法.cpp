#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ��ƼҪO

// �洫��Ӿ�ƨ��
void swapInt(int &a, int&b)
{
	int temp = a;
	a = b;
	b = temp;

}

// �洫��ӯB�I�ƨ��
void swapDouble(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}


// ��ƼҪ� 
template<typename T> // �n���@�ӼҪO, �i�D�sĶ���᭱�N�X�����۪�T���n����, T�O�@�ӳq�μƾ�����
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;

	//swapInt(a, b);
	// �Q�Ψ�ƼҪO�洫
	// ��ؤ覡�ϥΨ�ƼҪO
	// 1. �۰���������
	//mySwap(a, b);
	// 2. ��ܫ��w����
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//double c = 1.1;
	//double d = 2.2;

	//swapDouble(c, d);
	//cout << "c = " << c << endl;
	//cout << "d = " << d << endl;
}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

