#include <iostream>
using namespace std;

int main7() {

	//�G���}�C�W�٥γ~

	//1.�i�H�d�ݦ��Τ��s�Ŷ��j�p
	int arr[2][3] = 
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "�G���}�C���Τ��s�Ŷ���:  " << sizeof(arr) << endl;
	cout << "�G���}�C�Ĥ@�C���Τ��s��: " << sizeof(arr[0]) << endl;
	cout << "�G���}�C�Ĥ@�Ӥ����e�Τ��s��: " << sizeof(arr[0][0]) << endl;

	cout << "�G���}�C�C�Ƭ�: " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "�G���}�C��Ƭ�: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.�i�H�d�ݤG���}�C�����a�}
	cout << "�G���}�C���a�}��:  " << (int)arr << endl;
	cout << "�G���}�C�Ĥ@�C���a�}��:  " << (int)arr[0] << endl;
	cout << "�G���}�C�ĤG�C���a�}��:  " << (int)arr[1] << endl;

	cout << "�G���}�C�Ĥ@�Ӥ������a�}:  " << (int)&arr[0][0] << endl;
	cout << "�G���}�C�ĤG�Ӥ������a�}:  " << (int)&arr[0][1] << endl;

	system("pause");

	return 0;
}