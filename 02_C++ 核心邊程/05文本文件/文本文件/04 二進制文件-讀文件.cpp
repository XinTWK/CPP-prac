#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<fstream>

class Person
{
public:

	char m_Name[64]; // �m�W
	int m_Age; // �~��
};


// �G�i����  Ū���

void test01()
{
	// 1. �]�t�Y���

	// 2. �Ыجy��H
	ifstream ifs;

	// 3. ���}���  �P�_���O�_���}���\
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "��󥴶}����" << endl;
		return;
	}

	// 4. Ū���
	Person p;

	ifs.read((char *)&p, sizeof(Person));
	
	cout << "�m�W:  " << p.m_Name << " �~��:  " << p.m_Age << endl;

	// 5. �������
	ifs.close();
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
