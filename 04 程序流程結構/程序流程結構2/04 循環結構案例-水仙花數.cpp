#include <iostream>
using namespace std;

int main4() {

	// 1.先印出所有三位數字
	int num = 100;

	do {
		// 2.從所有三位數中找到水仙花數
		int a = 0;	//個位
		int b = 0;	//十位
		int c = 0;	//百位

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a*a*a + b*b*b + c*c*c == num) {//如果是水仙花數,才輸出
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	
	
	system("pause");

	return 0;
}