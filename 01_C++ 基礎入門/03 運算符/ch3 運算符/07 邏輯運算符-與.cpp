#include <iostream>
using namespace std;

int main7() {

	int a = 10;
	int b = 10;

	cout << (a && b) << endl;

	a = 0;
	b = 10;

	cout << (a && b) << endl;

	a = 0;
	b = 0;
	cout << (a && b) << endl;
	//同真為真,其餘為假

	system("pause");

	return 0;
}