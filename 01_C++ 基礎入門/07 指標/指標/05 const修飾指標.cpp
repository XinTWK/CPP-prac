#include<iostream>
using namespace std;

int main5() {

	//1. const 修飾指標 常數指標
	int a = 10;
	int b = 10;

	const int * p = &a;
	//指標指向的值不可以改,指標的指向可以改
	//*p = 20; 錯誤
	p = &b; //正確

	//2. const 修飾常數 指標常數
	// 指標的指向不可以改,指標指向的值可以改
	int * const p2 = &a;
	*p2 = 100; //正確
	//p2 = &b; //錯誤,指標的指向不可以改

	//3. const 修飾指標和常數
	const int * const p3 = &a;
	//指標的指向 和指標指向的值 都不可以改
	//p3 = &b; //錯誤
	//*p3 = 100; //錯誤


	system("pause");
	return 0;
}