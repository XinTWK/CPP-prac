#include <iostream>
using namespace std;

int main2() {
	short num1 = 10;
	cout << "short���Τ��s�Ŷ���: " << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int���Τ��s�Ŷ���:  " << sizeof(int) << endl;
	
	long num3 = 10;
	cout << "long���Τ��s�Ŷ���:  " << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long���Τ��s�Ŷ���:  " << sizeof(long long) << endl;
	
	//short < int <= long <= long long

	system("pause");

	return 0;
}