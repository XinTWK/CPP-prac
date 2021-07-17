#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// string 求子串

void test01()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

// 實用操作
void test02()
{
	string email = "hello@sina.com";

	// 從郵件地址中 獲取 用戶名訊息

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

