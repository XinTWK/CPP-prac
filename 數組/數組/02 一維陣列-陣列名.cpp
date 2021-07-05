#include <iostream>
using namespace std;

int main2() {

	//陣列名用途
	//1. 可以通過陣列名踵繼整個陣列占用內存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整個陣列佔用內存空間為:  " << sizeof(arr) << endl;
	cout << "每個元素佔用內存空間為:  " << sizeof(arr[0]) << endl;
	cout << "陣列中元素個數為:  " << sizeof(arr) / sizeof(arr[0]) << endl;

	//2. 可以通過陣列名查看陣列首地址
	cout << "陣列的首地址為:  " << (int)arr << endl;
	cout << "陣列中第一個元素的地址為:  " << &arr[0] << endl;
	cout << "陣列中第二個元素的地址為:  " << &arr[1] << endl;

	//陣列名是常數,不可以進行賦值操作

	system("pause");

	return 0;
}