#include <iostream>
using namespace std;

//肚患
//﹚竡ㄧ计, 龟瞷ㄢ计秈︽ユ传ㄧ计

//狦ㄧ计ぃ惠璶. 羘糶void
void swap1(int num1, int num2) {
	cout << "ユ传玡:  " << endl;
	cout << "num1 =  " << num1 << endl;
	cout << "num2 =  " << num2 << endl;
	
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "ユ传:  " << endl;
	cout << "num1 =  " << num1 << endl;
	cout << "num2 =  " << num2 << endl;
	
	
	// ぃ惠璶 ぃ糶 return
}


int main3() {

	int a = 10;
	int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap1(a, b);


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}