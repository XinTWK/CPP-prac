#include <iostream>
using namespace std;

int main4() {

	// 1.┮Τ计
	int num = 100;

	do {
		// 2.眖┮Τ计いт计
		int a = 0;	//
		int b = 0;	//
		int c = 0;	//κ

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a*a*a + b*b*b + c*c*c == num) {//狦琌计,块
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	
	
	system("pause");

	return 0;
}