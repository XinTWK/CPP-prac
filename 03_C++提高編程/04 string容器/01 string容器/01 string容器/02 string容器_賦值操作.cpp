#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// string ��Ⱦާ@
	// string����Ȥ覡�ܦh, uperator= �o�ؤ覡�O�����Ϊ�


/*
- string& operator=(const char* s);			// char*�����r�� ��ȵ���e���r��
- string& operator=(const string &s);		// ��r��s�ᵹ��e���r��
- string& operator=(char c);				// �r�Ž�ȵ���e���r��
- string& assign(const char *s);			// ��r��s�I����e���r��
- string& assign(const char *s, int n);		// ��r��s���en�Ӧr�Žᵹ��e���r��
- string& assign(const string &s);			// ��r��s�ᵹ��e�r��
- string& assign(int n, char c);			// ��n�Ӧr��c�ᵹ��e�r��
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

