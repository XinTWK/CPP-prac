#include <iostream>
using namespace std;

int main4() {

	//��{�}�C�����f�m

	//1. �Ыذ}�C
	int arr[5] = { 1,3,2,5,4 };
	cout << "�}�C�f�m�e:  "  << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] ;
	}
	cout << endl;

	//2. ��{�f�m
	int front = 0;
	int rear = sizeof(arr) / sizeof(arr[0]) - 1;
	//����
	while (front < rear) {
		int temp = arr[front];
		arr[front] = arr[rear];
		arr[rear] = temp;
		// index ��s
		front++;
		rear--;
	}

	//3. ��X�f�m�᪺�}�C
	cout << "�}�C�����f�m��: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i];
	}
	cout << endl;

	system("pause");

	return 0;
}