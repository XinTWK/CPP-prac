#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// string的構造函數

/*
string();						// 創建一個空的字串  例如:  string str;
string(const char* s);			// 使用字串s初始化
string(const string& str);		// 使用一個string對象初始化另一個string對象
string(int n, char c);			// 使用n個字符c初始化
*/


void test01()
{
	string s1; // 默認構造

	const char * str = "hello world";
	string s2(str);

	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;



}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

