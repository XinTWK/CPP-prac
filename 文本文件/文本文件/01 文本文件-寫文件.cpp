#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <fstream> // �Y���]�t


// �奻��� �g���

void test01()
{
	// 1. �]�t�Y��� fstream

	// 2. �Ыجy��H

	ofstream ofs;

	// 3. ���w���}�覡
	ofs.open("test.txt", ios::out);

	// 4. �g���e
	ofs << "�m�W: �i�T" << endl;
	ofs << "�ʧO: �k" << endl;
	ofs << "�~��: 18" << endl;

	// 5. �������
	ofs.close();

}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
