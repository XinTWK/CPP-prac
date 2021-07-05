#include <iostream>
using namespace std;
//time系統時間頭文件
#include <ctime>


int main2() {

	//添加隨機數種子 作用利用當前系統時間生成隨機數,防止每次隨機數都一樣
	srand((unsigned int)time(NULL));

	//1.系統生成隨機數
	int num =  rand() % 100 + 1; //生成 0 +1  ~ 99 +1 隨機數
	//cout << num << endl;

	//2.玩家進行猜測
	int val = 0; //玩家輸入的數據

	while (1)
	{
		cin >> val;

		//3.判斷玩家的猜測

		//猜錯 提示猜的結果 過大或者過小 重新返回第二步
		if (val > num) {
			cout << "猜測過大" << endl;
		}
		else if (val < num) {
			cout << "猜測過小" << endl;
		}
		else {
			cout << "恭喜您猜對了" << endl;
			break;
		}
	}

	
	//猜對 退出遊戲
	//猜錯 提示猜的結果 過大或過小 重新返回第2步



	system("pause");

	return 0;
}