#include <iostream>
using namespace std;

//��ƪ��n��
//������, ��{��Ӿ�ƼƦr�i����, ��^���j����

//���e�i�D�sĶ����ƪ��s�b,�i�H�Q�Ψ�ƪ��n��
//��ƪ��n��
//�n���i�H�g�h��,���O�w�q�u�঳�@��
int max(int a, int b);


int main5() {
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}


//�w�q
int max(int a, int b) {
	return	a > b ? a : b;
}