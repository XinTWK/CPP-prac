#include <iostream>
using namespace std;

int main2() {

	//選擇結構 多條件if語句
	//輸入一個分數,如果大於600分,視為考上一流大學
	//大於500,視為考上二流
	//大於400,視為考上三流
	//小於400,視為未考上

	//1.輸入分數
	int score = 0;
	cout << "請樹入考試分數: " << endl;
	cin >> score;

	//2.提示用戶輸入的分數
	cout << "您輸入的考試分數為: " << score << endl;

	//3.判斷
	//如果大於600,考上一流
	//如果大於500,考上二流
	//如果大於400,考上三流
	//前三個都沒滿足,沒考上

	if (score > 600) {
		cout << "恭喜您考上了一流大學" << endl;
	}
	else if (score > 500) {
		cout << "恭喜您考上了二流大學" << endl;
	}
	else if (score > 400) {
		cout << "恭喜您考上了三流大學" << endl;
	}
	else {
		cout << "未考上本科大學,請再接再厲" << endl;
	}

	system("pause");

	return 0;
}