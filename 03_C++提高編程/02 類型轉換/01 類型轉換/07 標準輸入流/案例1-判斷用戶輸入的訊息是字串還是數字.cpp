#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �P�_�Τ��J���T���O�r���٬O�Ʀr




void test01()
{
	cout << "�п�J�@�ӼƦr�Φr��: " << endl;

	char ch = cin.peek();
	if (ch >= '0' && ch<='9')
	{
		int num;
		cin >> num;
		cout << "�z��J���O�Ʀr: " << num << endl;
	}
	else
	{
		char buf[1024] = { 0 };
		cin >> buf;
		cout << "�z��J���O�r��: " << buf << endl;
	}

}

int main() {


	test01();
	system("pause");

	return EXIT_SUCCESS;
}
