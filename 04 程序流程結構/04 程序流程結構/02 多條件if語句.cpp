#include <iostream>
using namespace std;

int main2() {

	//��ܵ��c �h����if�y�y
	//��J�@�Ӥ���,�p�G�j��600��,�����ҤW�@�y�j��
	//�j��500,�����ҤW�G�y
	//�j��400,�����ҤW�T�y
	//�p��400,�������ҤW

	//1.��J����
	int score = 0;
	cout << "�о�J�Ҹդ���: " << endl;
	cin >> score;

	//2.���ܥΤ��J������
	cout << "�z��J���Ҹդ��Ƭ�: " << score << endl;

	//3.�P�_
	//�p�G�j��600,�ҤW�@�y
	//�p�G�j��500,�ҤW�G�y
	//�p�G�j��400,�ҤW�T�y
	//�e�T�ӳ��S����,�S�ҤW

	if (score > 600) {
		cout << "���߱z�ҤW�F�@�y�j��" << endl;
	}
	else if (score > 500) {
		cout << "���߱z�ҤW�F�G�y�j��" << endl;
	}
	else if (score > 400) {
		cout << "���߱z�ҤW�F�T�y�j��" << endl;
	}
	else {
		cout << "���ҤW����j��,�ЦA���A�F" << endl;
	}

	system("pause");

	return 0;
}