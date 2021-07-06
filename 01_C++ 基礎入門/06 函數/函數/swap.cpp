#include"swap.h"

//函數的定義
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "a =  " << a << endl;
	cout << "b =  " << b << endl;
}
