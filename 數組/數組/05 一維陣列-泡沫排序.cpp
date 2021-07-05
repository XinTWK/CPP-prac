#include <iostream>
using namespace std;

int main5() {

	//利用泡沫排序實現升序序列

	int arr[9] = { 4,2,8,0,5,7,1,3,9 };

	cout << "排序前:  " << endl;
	for (int i = 0; i < 9; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;

	//開始泡沫排序
	// 總共排序輪數為 元素個數-1
	for (int i = 0; i < 9 - 1; i++) {
		//內層循環對比 次數 = 元素個數-當前輪數-1
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//排序後結果
	cout << "排序後:  " << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}