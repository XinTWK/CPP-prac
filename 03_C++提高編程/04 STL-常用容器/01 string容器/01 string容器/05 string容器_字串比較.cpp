#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �r����

void test01()
{
	string str1 = "xello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else if (str1.compare(str2)>0)
	{
		cout << "str1 �j�� str2" << endl;
	}
	else
	{
		cout << "str1 �p�� str2" << endl;
	}

// �r����D�n�O�Ω�����Ӧr��O�_�c��, �P�_�֤j�֤p���N�q�ä��O�ܤj

}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

