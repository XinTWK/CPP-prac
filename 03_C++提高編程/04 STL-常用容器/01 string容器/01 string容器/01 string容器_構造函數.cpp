#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// string���c�y���

/*
string();						// �Ыؤ@�ӪŪ��r��  �Ҧp:  string str;
string(const char* s);			// �ϥΦr��s��l��
string(const string& str);		// �ϥΤ@��string��H��l�ƥt�@��string��H
string(int n, char c);			// �ϥ�n�Ӧr��c��l��
*/


void test01()
{
	string s1; // �q�{�c�y

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

