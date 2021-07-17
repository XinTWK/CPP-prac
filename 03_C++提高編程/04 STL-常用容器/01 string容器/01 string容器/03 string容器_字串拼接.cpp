#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// string ﹃钡
/*
- string& operator+=(const char* str);					// 更+=巨才
- string& operator+=(const char c);						// 更+=巨才
- string& operator+=(const string& str);				// 更+=巨才
- string& append(const char *s);						// р﹃s硈钡讽玡﹃挡Ю
- string& append(const char *s, int n);					// р﹃s玡n才硈钡讽玡﹃挡Ю
- string& append(const string &s);						// operator+=(const string& str);
- string& append(const string &s, int pos, int n);		// ﹃sい眖pos秨﹍n才硈钡﹃挡Ю
*/



void test01()
{
	string str1 = "и";
	
	str1 += "稲笴栏";

	cout << "str1 = " << str1 << endl;

	str1 += ':';

	cout << "str1 = " << str1 << endl;

	string str2 = " LOL WOW";

	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << "str3 = " << str3 << endl;

	str3.append("game abcde", 4);
	cout << "str3 = " << str3 << endl;
	
	//str3.append(str2);
	// I love game LOL WOW

	//str3.append(str2, 0, 4); // 耝LOL
	str3.append(str2, 4, 4); // 耝WOW, 把计2 眖讽癬翴, 把计3 耝才计

	cout << "str3 = " << str3 << endl;





}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

