#include <iostream>
using namespace std;

int main1() {

	//break���ϥήɾ�

	////1. �X�{�bswitch�y�y��
	//cout << "�п�ܰƥ�������" << endl;
	//cout << "1.���q����" << endl;
	//cout << "2.��������" << endl;
	//cout << "3.�x������" << endl;

	//int select = 0; //�Ыؿ�ܵ��G���ܼ�

	//cin >> select; //���ݥΤ��J

	//switch (select) {
	//case 1 :
	//	cout << "�z��ܪ��O���q����" << endl;
	//	break;
	//case 2 :
	//	cout << "�z��ܪ��O��������" << endl;
	//	break;
	//case 3 :
	//	cout << "�z��ܪ��O�x������" << endl;
	//	break;
	//default:
	//	break;
	//}



	////2. �X�{�b�`���y�y��

	//for (int i = 0; i < 10; i++) {
	//	//�p�Gi����5,�h�X�`��,���A��X
	//	if (i == 5) {
	//		break;
	//	}
	//	cout << i << endl;
	//}

	//3. �X�{�b�O�M�`���y�y��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}