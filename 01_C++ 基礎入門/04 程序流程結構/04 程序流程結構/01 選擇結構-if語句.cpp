#include <iostream>
using namespace std;

int main1(){

	//1.輸入分數
	int score = 0;
	cout << "請輸入一個分數: " << endl;
	cin >> score;

	//2.印出輸入的分數
	cout << "您輸入的分數為: " << score << endl;

	//3. 判斷是否大於600 
	if (score > 600) {
		cout << "恭喜您考上了大學" << endl;
	}
	else{
		cout << "下次再加油" << endl;
	}


	system("pause");

	return 0;
}