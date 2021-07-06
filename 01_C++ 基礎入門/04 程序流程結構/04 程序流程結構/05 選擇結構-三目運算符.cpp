#include <iostream>
using namespace std;

int main5() {

	//三目運算符

	//創建三個變數 a b c
	//將a和b做比較,將變數大的值給予變數C

	int a = 10;
	int b = 20;
	int c = 0;

	c = ( a > b ? a : b) ;

	cout << "c = " << c << endl;

	(a < b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}