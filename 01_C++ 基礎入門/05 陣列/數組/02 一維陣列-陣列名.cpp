#include <iostream>
using namespace std;

int main2() {

	//�}�C�W�γ~
	//1. �i�H�q�L�}�C�W���~��Ӱ}�C�e�Τ��s�j�p
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��Ӱ}�C���Τ��s�Ŷ���:  " << sizeof(arr) << endl;
	cout << "�C�Ӥ������Τ��s�Ŷ���:  " << sizeof(arr[0]) << endl;
	cout << "�}�C�������ӼƬ�:  " << sizeof(arr) / sizeof(arr[0]) << endl;

	//2. �i�H�q�L�}�C�W�d�ݰ}�C���a�}
	cout << "�}�C�����a�}��:  " << (int)arr << endl;
	cout << "�}�C���Ĥ@�Ӥ������a�}��:  " << &arr[0] << endl;
	cout << "�}�C���ĤG�Ӥ������a�}��:  " << &arr[1] << endl;

	//�}�C�W�O�`��,���i�H�i���Ⱦާ@

	system("pause");

	return 0;
}