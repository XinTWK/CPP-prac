#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// string 賦值操作
	// string的賦值方式很多, uperator= 這種方式是比較實用的


/*
- string& operator=(const char* s);			// char*類型字串 賦值給當前的字串
- string& operator=(const string &s);		// 把字串s賦給當前的字串
- string& operator=(char c);				// 字符賦值給當前的字串
- string& assign(const char *s);			// 把字串s付給當前的字串
- string& assign(const char *s, int n);		// 把字串s的前n個字符賦給當前的字串
- string& assign(const string &s);			// 把字串s賦給當前字串
- string& assign(int n, char c);			// 用n個字符c賦給當前字串
*/

void test01()
{
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("hello C++");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("hollo C++", 5);
	cout << "str5 = " << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(10, 'w');
	cout << "str7 = " << str7 << endl;


}




int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

