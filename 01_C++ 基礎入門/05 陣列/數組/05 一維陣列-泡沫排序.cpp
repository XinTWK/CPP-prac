#include <iostream>
using namespace std;

int main5() {

	//�Q�Ϊw�j�Ƨǹ�{�ɧǧǦC

	int arr[9] = { 4,2,8,0,5,7,1,3,9 };

	cout << "�Ƨǫe:  " << endl;
	for (int i = 0; i < 9; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;

	//�}�l�w�j�Ƨ�
	// �`�@�Ƨǽ��Ƭ� �����Ӽ�-1
	for (int i = 0; i < 9 - 1; i++) {
		//���h�`����� ���� = �����Ӽ�-��e����-1
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//�Ƨǫᵲ�G
	cout << "�Ƨǫ�:  " << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}