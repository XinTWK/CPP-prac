#include <iostream>
using namespace std;

int main6() {

	//篤ㄒ
	//1.块1~100计
	for (int i = 1; i <= 100; i++) {

		//2.眖100计いт疭计,块"篤"
		//狦琌 7计,计7,┪计7,块篤
		if ( i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "\"篤\"" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");

	return 0;
}