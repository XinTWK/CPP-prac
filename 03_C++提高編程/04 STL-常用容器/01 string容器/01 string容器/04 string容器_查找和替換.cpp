#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// �r��d��M����

// 1. �d��
void test01()
{
	string str1 = "abcdefgde";
	
	int pos =  str1.find("de");

	if (pos == -1)
	{
		cout << "�����r��" << endl;
	}
	else
	{
		cout << "���r��, pos = " << pos << endl;
	}

	// rfind �Mfinc �ϧO
	// rfind �q�k����d��   find �q�����k�d��
	pos = str1.rfind("de");

	cout << "pos = " << pos << endl;

}

// find �d��O�q�����k   rfind �q�k����
// find���r����^�d�䪺�Ĥ@�Ӧr�Ŧ�m, �䤣���^-1




// 2. ����
void test02()
{
	string str1 = "abcdefg";

	// �q1����m�_ 3�Ӧr�� ������"1111"
	str1.replace(1, 3, "1111");

	cout << "str1 = " << str1 << endl;
}

// replace�b������, �n���w�q���Ӧ�m�_, �h�֭Ӧr��, �������ƻ�˪��r��


int main() {

	//test01();
	test02();


	system("pause");

	return EXIT_SUCCESS;
}
