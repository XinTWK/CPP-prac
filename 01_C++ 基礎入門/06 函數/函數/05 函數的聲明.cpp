#include <iostream>
using namespace std;

//函數的聲明
//比較函數, 實現兩個整數數字進行比較, 返回較大的值

//提前告訴編譯器函數的存在,可以利用函數的聲明
//函數的聲明
//聲明可以寫多次,但是定義只能有一次
int max(int a, int b);


int main5() {
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}


//定義
int max(int a, int b) {
	return	a > b ? a : b;
}