#include <iostream>
using namespace std;

//�w�j�ƧǨ�� �Ѽ�1 �}�C�����a�}  �Ѽ�2 �}�C����
void bubbleSort(int *arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			// �p�G j>j+1 ���� �洫�Ʀr
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// ��X�}�C
void printArray(int * arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

int main8() {

	// 1.���Ыذ}�C
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	// �}�C����
	int len = sizeof(arr) / sizeof(arr[0]);
	// 2.�Ыب��,��{�w�j�Ƨ�
	bubbleSort(arr, len);

	// 3.��X�Ƨǫ᪺�}�C
	printArray(arr, len);

	system("pause");

	return 0;

}