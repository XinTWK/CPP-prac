#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<fstream>

// �G�i����  �g���
class Person
{
public:

	char m_Name[64]; // �m�W
	int m_Age; // �~��
};


void test01()
{
	// 1. �]�t�Y���

	// 2. �Ыجy��H
	ofstream ofs("person.txt", ios::out | ios::binary);

	// 3. ���}���
	//ofs.open("person.txt", ios::out | ios::binary);

	// 4. �g���
	Person p = { "�i�T",18 };
	ofs.write((const char *)&p, sizeof(Person));

	// 5. �������
	ofs.close();

}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
