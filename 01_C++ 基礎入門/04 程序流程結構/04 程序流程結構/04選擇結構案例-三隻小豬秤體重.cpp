#include <iostream>
using namespace std;

int main4() {

	//1.創建三隻小豬的體重變數
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2.讓用戶輸入三隻小豬的體重
	cout << "請輸入小豬A的體重: " << endl;
	cin >> num1;

	cout << "請輸入小豬B的體重: " << endl;
	cin >> num2;

	cout << "請輸入小豬C的體重: " << endl;
	cin >> num3;

	cout << "小豬A的體重為: " << num1 << endl;
	cout << "小豬B的體重為: " << num2 << endl;
	cout << "小豬C的體重為: " << num3 << endl;

	//3.判斷哪隻最重
	//先判斷A和B重量
	if (num1 > num2) {
		if (num1 > num3) {
			cout << "小豬A最重" << endl;
		}
		else {
			cout << "小豬C最重" << endl;
		}
	}
	else {
		if (num2 > num3) {
			cout << "小豬B最重" << endl;
		}
		else {
			cout << "小豬C最重" << endl;
		}
	}


	system("pause");

	return 0;
}