#include <iostream>
using namespace std;

int main3() {

	int score = 0;
	cout << "�п�J�Ҹդ���:" << endl;
	cin >> score;


	cout << "�z��J�����Ƭ�: " << score << endl;

	if (score > 600) {
		cout << "���߱z�ҤW�@�y�j��" << endl;
		if (score > 700) {
			cout << "�z��ҤJ�x�W�j��" << endl;
		}
		else if (score > 650) {
			cout << "�z��ҤJ�M�j" << endl;
		}
		else {
			cout << "�z��ҤJ���j" << endl;
		}
	}
	else if (score > 500) {
		cout << "���߱z�ҤW�G�y�j��" << endl;
	}
	else if (score > 400) {
		cout << "���߱z�ҤW�T�y�j��" << endl;
	}
	else {
		cout << "�S�ҤW�j��" << endl;
	}

	system("pause");

	return 0;
}