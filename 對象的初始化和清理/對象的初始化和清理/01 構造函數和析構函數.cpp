#include<iostream>
using namespace std;

// ��H����l�ƩM�M�z
// 1.�c�y��� �i���l�ƾާ@
class Person
{
public:
	// 1. �c�y���
	// �S����^�� ���μgvoid
	// ��ƦW �P���W�ۦP
	// �c�y��ƥi�H���Ѽ�, �i�H�o�ͭ���
	// �Ыع�H���ɭ�, �c�y��Ʒ|�۰ʽե�, �ӥB�u�եΤ@��

	Person()
	{
		cout << "Person�c�y��ƪ��ե�" << endl;
	}

	// 2.�R�c��� �i��M�z���ާ@
	// �S����^�� ���gvoid
	// ��Ʃ��M���W�ۦP �b�W�٫e�[ ~
	// �R�c��Ƥ��i�H���Ѽƪ�, ���i�H�o�ͭ���
	// ��H�b�P���e �|�۰ʽեΪR�c���, �ӥB�u�|�եΤ@��
	~Person()
	{
		cout << "Person ���R�c��ƽե�" << endl;
	}

};


// �c�y�M�R�c���O����������{, �p�G�ڭ̦ۤv������, �sĶ���|���Ѥ@�ӪŹ�{���c�y�M�R�c
void test01()
{
	Person p; //�b�̤W���ƾ�, test01���槹����, ����o�ӹ�H
}

int main() {

	test01();

	//Person p;

	system("pause");

	return 0;
}