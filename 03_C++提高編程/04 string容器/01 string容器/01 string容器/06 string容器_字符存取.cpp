#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// string 字符存取
void test01()
{
	string str = "hello";

	//cout << "str = " << str << endl;

	// 1. 通過 [] 訪問單個字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";

	}
	cout << endl;

	// 2. 通過at方式訪問單個字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	// 修改單個字符
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

