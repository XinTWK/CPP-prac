#include <iostream>
using namespace std;

int main4() {

	//1.�ЫؤT���p�ު��魫�ܼ�
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2.���Τ��J�T���p�ު��魫
	cout << "�п�J�p��A���魫: " << endl;
	cin >> num1;

	cout << "�п�J�p��B���魫: " << endl;
	cin >> num2;

	cout << "�п�J�p��C���魫: " << endl;
	cin >> num3;

	cout << "�p��A���魫��: " << num1 << endl;
	cout << "�p��B���魫��: " << num2 << endl;
	cout << "�p��C���魫��: " << num3 << endl;

	//3.�P�_�����̭�
	//���P�_A�MB���q
	if (num1 > num2) {
		if (num1 > num3) {
			cout << "�p��A�̭�" << endl;
		}
		else {
			cout << "�p��C�̭�" << endl;
		}
	}
	else {
		if (num2 > num3) {
			cout << "�p��B�̭�" << endl;
		}
		else {
			cout << "�p��C�̭�" << endl;
		}
	}


	system("pause");

	return 0;
}