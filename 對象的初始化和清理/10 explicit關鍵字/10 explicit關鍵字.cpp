#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	// explicit����r���@��:
	// ����Q�������k�Ыع�H
	explicit Person(int a)
	{
		cout << "Person���c�y��ƽե�" << endl;
	}
};

void test01()
{
	//Person p = 10; // error �]���c�y��Ƥ��[�F explicit����r

	Person p1(10);

	Person p2 = Person(10);
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}