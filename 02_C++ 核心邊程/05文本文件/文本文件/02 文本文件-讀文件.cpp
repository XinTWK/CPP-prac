#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<fstream>
#include<string>

// �奻��� Ū���
void test01()
{
	// 1. �]�t�Y���

	// 2. �Ыجy��H
	ifstream ifs;

	// 3. ���}��� �åB�P�_�O�_���}���\
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "��󥴶}����" << endl;
		return;
	}

	// 4. Ū�ƾ�

	// �Ĥ@��
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	// �ĤG��
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	// �ĤT��
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	// �ĥ|��
	char c;
	while ((c = ifs.get()) != EOF) // EOF : End Of File
	{
		cout << c;
	}


	// 5. �������
	ifs.close();
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
