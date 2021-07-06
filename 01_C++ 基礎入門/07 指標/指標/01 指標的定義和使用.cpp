#include <iostream>
using namespace std;

int main1() {

	//1.定義指標
	int a = 10;
	//指標定義的語法: 數據類型 * 指標變數名;
	int * p;
	//讓指標紀錄變數a的地址
	p = &a;
	cout << "a的地址為: " << &a << endl;
	cout << "指標p為: " << p << endl;

	//2.使用指標
	//可以通過解引用的方式來找到指標指向的內存
	//指標前 加* 代表解引用,找到指標指向的內存中的數據
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;



	system("pause");

	return 0;
}