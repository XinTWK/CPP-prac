#include <iostream>
using namespace std;

int main4() {

	//實現陣列元素逆置

	//1. 創建陣列
	int arr[5] = { 1,3,2,5,4 };
	cout << "陣列逆置前:  "  << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] ;
	}
	cout << endl;

	//2. 實現逆置
	int front = 0;
	int rear = sizeof(arr) / sizeof(arr[0]) - 1;
	//互換
	while (front < rear) {
		int temp = arr[front];
		arr[front] = arr[rear];
		arr[rear] = temp;
		// index 更新
		front++;
		rear--;
	}

	//3. 輸出逆置後的陣列
	cout << "陣列元素逆置後: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i];
	}
	cout << endl;

	system("pause");

	return 0;
}