#include<iostream>
using namespace std;

int main5() {

	//1. const �׹����� �`�ƫ���
	int a = 10;
	int b = 10;

	const int * p = &a;
	//���Ы��V���Ȥ��i�H��,���Ъ����V�i�H��
	//*p = 20; ���~
	p = &b; //���T

	//2. const �׹��`�� ���б`��
	// ���Ъ����V���i�H��,���Ы��V���ȥi�H��
	int * const p2 = &a;
	*p2 = 100; //���T
	//p2 = &b; //���~,���Ъ����V���i�H��

	//3. const �׹����ЩM�`��
	const int * const p3 = &a;
	//���Ъ����V �M���Ы��V���� �����i�H��
	//p3 = &b; //���~
	//*p3 = 100; //���~


	system("pause");
	return 0;
}