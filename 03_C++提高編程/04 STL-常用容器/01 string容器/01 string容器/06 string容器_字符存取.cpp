#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// string �r�Ŧs��
void test01()
{
	string str = "hello";

	//cout << "str = " << str << endl;

	// 1. �q�L [] �X�ݳ�Ӧr��
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";

	}
	cout << endl;

	// 2. �q�Lat�覡�X�ݳ�Ӧr��
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	// �ק��Ӧr��
	str[0] = 'x';
	// xello
	cout << "str = " << str << endl;

	str.at(1) = 'x';
	// xxllo
	cout << "str = " << str << endl;
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

