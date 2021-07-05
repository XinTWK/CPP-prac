#include <iostream>
using namespace std;

//ㄧ计盽ǎ妓Α
//1. 礚把礚
void test01() {
	cout << "this is test01 " << endl;
}

//2. Τ把礚
void test02(int a) {
	cout << "this is test02 a =  " << a << endl;
}

//3. 礚把Τ
int test03() {
	cout << "this is test03 " << endl;
	return 1000;
}
//4. Τ把Τ
int test04(int a) {
	cout << "this is test04 a = " << a << endl;
	return a;
}



int main4() {
	
	//礚把礚ㄧ计秸ノ
	test01();
	
	//Τ把礚ㄧ计秸ノ
	test02(100);

	//礚把Τㄧ计秸ノ
	int num1 = test03();
	cout << "num1 =  " << num1 << endl;

	//Τ把Τㄧ计秸ノ
	int num2 =  test04(10000);
	cout << "num2 =  " << num2 << endl;

	system("pause");

	return 0;
}