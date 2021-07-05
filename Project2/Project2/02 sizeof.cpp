#include <iostream>
using namespace std;

int main2() {
	short num1 = 10;
	cout << "short佔用內存空間為: " << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int佔用內存空間為:  " << sizeof(int) << endl;
	
	long num3 = 10;
	cout << "long佔用內存空間為:  " << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long佔用內存空間為:  " << sizeof(long long) << endl;
	
	//short < int <= long <= long long

	system("pause");

	return 0;
}