#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// �r�� ���J�M�R��

void test01()
{
	string str = "hello";

	// ���J
	str.insert(1, "111");
	// hello -> h111ello
	cout << "str = " << str << endl;

	// �R��
	str.erase(1, 3); // �q1����m�}�l3�Ӧr��
	cout << "str = " << str << endl;
}


int main() {


	test01();
	system("pause");

	return EXIT_SUCCESS;
}

