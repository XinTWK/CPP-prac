#include <iostream>
using namespace std;

int main3() {

	int score = 0;
	cout << "請輸入考試分數:" << endl;
	cin >> score;


	cout << "您輸入的分數為: " << score << endl;

	if (score > 600) {
		cout << "恭喜您考上一流大學" << endl;
		if (score > 700) {
			cout << "您能考入台灣大學" << endl;
		}
		else if (score > 650) {
			cout << "您能考入清大" << endl;
		}
		else {
			cout << "您能考入成大" << endl;
		}
	}
	else if (score > 500) {
		cout << "恭喜您考上二流大學" << endl;
	}
	else if (score > 400) {
		cout << "恭喜您考上三流大學" << endl;
	}
	else {
		cout << "沒考上大學" << endl;
	}

	system("pause");

	return 0;
}