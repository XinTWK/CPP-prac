#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �зǿ�J�y


/*
cin.get() // �@���u��Ū���@�Ӧr��
cin.get(�@�ӰѼ�) // Ū�@�Ӧr��
cin.get(��ӰѼ�) // �i�HŪ�r��
cin.getline()
cin.ignore()
cin.peek()
cin.putback()
*/

void test01()
{
	// ��Jas  �Ĥ@�� a  �ĤG�� s  �ĤT�� \n  �ĥ|��  ���ݤU����J
	char ch;
	ch = cin.get();
	cout << "ch =  " << ch << endl;
	
	ch = cin.get();
	cout << "ch =  " << ch << endl;

	ch = cin.get();
	cout << "ch =  " << ch << endl;

	ch = cin.get();
	cout << "ch =  " << ch << endl;
}

void test02()
{
	// cin.get(�@�ӰѼ�) // Ū�@�Ӧr��
	//char ch;
	//cin.get(ch);
	//cout << "ch =  " << ch << endl;

	//cin.get(��ӰѼ�) // �i�HŪ�r��
	char buf[1024] = { 0 }; 
	cin.get(buf, 1024); // ����ŷ|��d�b�w�İϤ�

	char ch;
	ch = cin.get();
	if (ch == '\n')
	{
		cout << "����ſ�d�b�w�İϤ�" << endl;
	}
	else
	{
		cout << "����ŨS����d�b�w�İϤ�" << endl;
	}

	cout << "buf = " << buf << endl;
	
}

void test03()
{
	char buf[1024] = { 0 };
	cin.getline(buf, 1024); // ����Ť��|��d�b�w�İϤ�

	char ch;
	ch = cin.get();
	if (ch == '\n')
	{
		cout << "����ſ�d�b�w�İϤ�" << endl;
	}
	else
	{
		cout << "����ŨS����d�b�w�İϤ�" << endl;
	}

	cout << "buf = " << buf << endl;

}

void test04()
{
	// cin.ingnore() ����
	cin.ignore(2); // �q�{�|�����w�İϤ����@�Ӧr��, �i�H�Q�έ��������� ���w�������Ӽ�
	char ch = cin.get();
	cout << "ch =  " << ch << endl;

}

void test05()
{
	//cin.peek()  ���s
	char ch = cin.peek();
	cout << "ch =  " << ch << endl;
	ch = cin.get();
	cout << "ch =  " << ch << endl;

}

void test06()
{
	// cin.putback() ��^
	char ch = cin.get();
	cin.putback(ch); // �N�r�ũ�^��_�l��m

	char buf[1024] = { 0 };
	cin.getline(buf, 1024);
	cout << "buf = " << buf << endl;

}




int main() {

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();


	system("pause");

	return EXIT_SUCCESS;
}
