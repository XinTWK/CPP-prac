#include <iostream>
using namespace std;

int main8() {

	int a = 10;
	int b = 10;

	cout << (a || b) << endl;

	a = 0;
	b = 10;

	cout << (a || b) << endl;

	a = 0;
	b = 0;

	cout << (a || b) << endl;

	//同假為假,其餘為真


	system("pause");

	return 0;
}