#include <iostream>
using namespace std;

static int* func()
{	
	//�Q��new����r �i�H�N�ƾڶ}�P����
	//���� ����]�O�����ܼ�, ��b�̤W, ���ЫO�s���ƾڬO��b���
	int * p = new int(10);
	return p;
}

int main()
{

	//�b��϶}�P�ƾ�
	int *p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;	

}