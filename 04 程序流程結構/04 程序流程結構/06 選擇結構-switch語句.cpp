#include <iostream>
using namespace std;

int main6() {

	//switch�y�y
	//���q�v����
	// 10 ~ 9 �g��
	//  8 ~ 7 �D�`�n
	//  6 ~ 5 �@��
	//  5�H�U ���

	// 1.���ܥΤᵹ�q�v����
	cout << "�е��q�v�i�����" << endl;
	// 2.�Τ�}�l�i�����
	int score = 0;
	cin >> score;
	cout << "�z�������Ƭ�: " << score << endl;
	// 3.�ھڥΤ��J�����ƨӴ��̫᪺ܳ���G

	switch (score) {
	case 10:
		cout << "�z�{���O�g��q�v" << endl;
		break; //�h�X��e����
	case 9:
		cout << "�z�{���O�g��q�v" << endl;
		break;
	case 8:
		cout << "�z�{���q�v�D�`�n" << endl;
		break;
	case 7:
		cout << "�z�{���q�v�D�`�n" << endl;
		break;
	case 6:
		cout << "�z�{���q�v�@��" << endl;
		break;
	case 5:
		cout << "�z�{���q�v�@��" << endl;
		break;
	default :
		cout << "�z�{���O�@�����" << endl;
		break;
	}

	// if�Mswitch�ϧO?
	// switch ���I: �P�_�ɭԥu��O��ƩΦr�� ,���i�H�O�@�Ӱ϶�
	// switch �u�I: ���c�M��,����Ĳv��

	system("pause");

	return 0;
}