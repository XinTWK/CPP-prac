#include <iostream>
using namespace std;

int main7() {

	//二維陣列名稱用途

	//1.可以查看佔用內存空間大小
	int arr[2][3] = 
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二維陣列佔用內存空間為:  " << sizeof(arr) << endl;
	cout << "二維陣列第一列佔用內存為: " << sizeof(arr[0]) << endl;
	cout << "二維陣列第一個元素占用內存為: " << sizeof(arr[0][0]) << endl;

	cout << "二維陣列列數為: " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二維陣列行數為: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.可以查看二維陣列的首地址
	cout << "二維陣列首地址為:  " << (int)arr << endl;
	cout << "二維陣列第一列首地址為:  " << (int)arr[0] << endl;
	cout << "二維陣列第二列首地址為:  " << (int)arr[1] << endl;

	cout << "二維陣列第一個元素首地址:  " << (int)&arr[0][0] << endl;
	cout << "二維陣列第二個元素首地址:  " << (int)&arr[0][1] << endl;

	system("pause");

	return 0;
}