#include <iostream>
using namespace std;

int main1() {

	//break的使用時機

	////1. 出現在switch語句中
	//cout << "請選擇副本的難度" << endl;
	//cout << "1.普通難度" << endl;
	//cout << "2.中等難度" << endl;
	//cout << "3.困難難度" << endl;

	//int select = 0; //創建選擇結果的變數

	//cin >> select; //等待用戶輸入

	//switch (select) {
	//case 1 :
	//	cout << "您選擇的是普通難度" << endl;
	//	break;
	//case 2 :
	//	cout << "您選擇的是中等難度" << endl;
	//	break;
	//case 3 :
	//	cout << "您選擇的是困難難度" << endl;
	//	break;
	//default:
	//	break;
	//}



	////2. 出現在循環語句中

	//for (int i = 0; i < 10; i++) {
	//	//如果i等於5,退出循環,不再輸出
	//	if (i == 5) {
	//		break;
	//	}
	//	cout << i << endl;
	//}

	//3. 出現在嵌套循環語句中
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}