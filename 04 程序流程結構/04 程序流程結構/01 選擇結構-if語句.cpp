#include <iostream>
using namespace std;

int main1(){

	//1.��J����
	int score = 0;
	cout << "�п�J�@�Ӥ���: " << endl;
	cin >> score;

	//2.�L�X��J������
	cout << "�z��J�����Ƭ�: " << score << endl;

	//3. �P�_�O�_�j��600 
	if (score > 600) {
		cout << "���߱z�ҤW�F�j��" << endl;
	}
	else{
		cout << "�U���A�[�o" << endl;
	}


	system("pause");

	return 0;
}