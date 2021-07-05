#include <iostream>
using namespace std;

//獁猨逼ㄧ计 把计1 皚  把计2 皚
void bubbleSort(int *arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			// 狦 j>j+1  ユ传计
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// 块皚
void printArray(int * arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

int main8() {

	// 1.承皚
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	// 皚
	int len = sizeof(arr) / sizeof(arr[0]);
	// 2.承ㄧ计,龟瞷獁猨逼
	bubbleSort(arr, len);

	// 3.块逼皚
	printArray(arr, len);

	system("pause");

	return 0;

}