#include <iostream>
using namespace std;

int main6() {

	//switch語句
	//給電影評分
	// 10 ~ 9 經典
	//  8 ~ 7 非常好
	//  6 ~ 5 一般
	//  5以下 爛片

	// 1.提示用戶給電影評分
	cout << "請給電影進行評分" << endl;
	// 2.用戶開始進行評分
	int score = 0;
	cin >> score;
	cout << "您評的分數為: " << score << endl;
	// 3.根據用戶輸入的分數來提示最後的結果

	switch (score) {
	case 10:
		cout << "您認為是經典電影" << endl;
		break; //退出當前分支
	case 9:
		cout << "您認為是經典電影" << endl;
		break;
	case 8:
		cout << "您認為電影非常好" << endl;
		break;
	case 7:
		cout << "您認為電影非常好" << endl;
		break;
	case 6:
		cout << "您認為電影一般" << endl;
		break;
	case 5:
		cout << "您認為電影一般" << endl;
		break;
	default :
		cout << "您認為是一部爛片" << endl;
		break;
	}

	// if和switch區別?
	// switch 缺點: 判斷時候只能是整數或字元 ,不可以是一個區間
	// switch 優點: 結構清晰,執行效率高

	system("pause");

	return 0;
}