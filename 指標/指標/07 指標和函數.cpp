#include <iostream>
using namespace std;

//實現兩個數字進行交換
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a =  " << a << endl;
	cout << "swap01 b =  " << b << endl;
}

void swap02(int *p1, int * p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}


int main7() {

	//指標和函數
	// 1. 值傳遞
	int a = 10;
	int b = 20;
	//swap01(a, b);

	// 2.  地址傳遞
	// 如果是地址傳遞,可以修飾實參
	swap02(&a, &b);

	cout << "a =  " << a << endl;
	cout << "b =  " << b << endl;




	system("pause");

	return 0;

}