#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// string �r�����
/*
- string& operator+=(const char* str);					// ����+=�ާ@��
- string& operator+=(const char c);						// ����+=�ާ@��
- string& operator+=(const string& str);				// ����+=�ާ@��
- string& append(const char *s);						// ��r��s�s�����e�r�굲��
- string& append(const char *s, int n);					// ��r��s���en�Ӧr�ųs�����e�r�굲��
- string& append(const string &s);						// �Poperator+=(const string& str);
- string& append(const string &s, int pos, int n);		// �r��s���qpos�}�l��n�Ӧr�ųs����r�굲��
*/



void test01()
{
	string str1 = "��";
	
	str1 += "�R���C��";

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

	//str3.append(str2, 0, 4); // �u�^����LOL
	str3.append(str2, 4, 4); // �u�^��WOW, �Ѽ�2 �q���Ӧ�l��_�I, �Ѽ�3 �^�����r�ŭӼ�

	cout << "str3 = " << str3 << endl;





}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

