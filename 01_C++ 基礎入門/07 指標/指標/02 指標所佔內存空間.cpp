#include <iostream>
using namespace std;

int main2() {

	//���ЩҦ����s�Ŷ�
	int a = 10;
	//int *p;
	//p = &a;

	int *p = &a;

	//�b32��ާ@�t�ΤU,���Хܦ�4�Ӧr�`�Ŷ��j�p,���ެO�ƻ�ƾ�����
	//�b64��ާ@�t�ΤU,���ЬO��8�Ӧr�`�Ŷ��j�p,���ެO�ƻ�ƾ�����
	cout << "sizeof int * = " << sizeof(int *) << endl;
	cout << "sizeof int * = " << sizeof(float *) << endl;
	cout << "sizeof int * = " << sizeof(double *) << endl;
	cout << "sizeof int * = " << sizeof(char *) << endl;
	system("pause");

	return 0;
}