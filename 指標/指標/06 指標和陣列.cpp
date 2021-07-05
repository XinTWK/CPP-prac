#include <iostream>
using namespace std;

int main6() {

	//指標和陣列
	//利用指標訪問陣列中的元素

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "第一個元素為:  " << arr[0] << endl;

	int * p = arr; //arr就是陣列的首地址

	cout << "利用指標來訪問第一個元素:  " << *p << endl;

	p++; //讓指標向後偏移4個字節

	cout << "利用指標來訪問第二個元素:  " << *p << endl;

	cout << "利用指針遍歷陣列 " << endl;

	int *p2 = arr;

	for(int i = 0; i < 10; i++) {
		//cout << arr[i] << endl;
		cout << *p2 << endl;
		p2++;
	}


	system("pause");

	return 0;
}