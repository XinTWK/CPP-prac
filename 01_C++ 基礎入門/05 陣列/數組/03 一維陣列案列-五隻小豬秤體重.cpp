#include <iostream>
using namespace std;

int main3() {

	// 1.創建五隻小豬體重的陣列

	int arr[] = { 300,350,500,400,250 };

	// 2. 從陣列中找到最大值

	int max = 0;
	for(int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	// 3. 輸出最大值
	cout << "最重的小豬體重為:  " << max << endl;
		
	system("pause");

	return 0;
}