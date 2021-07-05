#include <iostream>
using namespace std;

 //﹚竡猭ㄧ计
//ㄧ计﹚竡,num1㎝num2⊿Τ痷龟计沮,琌Α把计,虏嘿把
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}


int main2() {

	//mainㄧ计い秸ノaddㄧ计
	int a = 10;
	int b = 20;

	//ㄧ计秸ノ粂猭: ㄧ计嘿 (把计)
	//a㎝b嘿 龟悔把计,虏嘿龟把
	//讽秸ノㄧ计,龟繺穦肚患倒把
	int c = add(a, b);

	cout << "c = " << c << endl;

	a = 100;
	b = 500;

	c = add(a, b);
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}