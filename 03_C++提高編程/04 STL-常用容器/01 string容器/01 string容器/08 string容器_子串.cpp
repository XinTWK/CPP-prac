#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// string �D�l��

void test01()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

// ��ξާ@
void test02()
{
	string email = "hello@sina.com";

	// �q�l��a�}�� ��� �Τ�W�T��

	int pos = email.find("@");
	cout << pos << endl;

	string userName = email.substr(0, pos);

	cout << userName << endl;

}

int main() {

	test02();

	system("pause");

	return EXIT_SUCCESS;
}

