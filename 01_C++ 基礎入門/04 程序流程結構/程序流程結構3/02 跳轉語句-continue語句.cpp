#include <iostream>
using namespace std;

int main2() {


	// continue語句

	for (int i = 0; i <= 100; i++) {

		if (i % 2 == 0) { //不執行 繼續往下 故只印出奇數
			continue;
		}
			cout << i << endl;
		
	}

	system("pause");

	return 0;
}