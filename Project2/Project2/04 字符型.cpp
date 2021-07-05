#include <iostream>
using namespace std;

int main4() {
	
	char ch = 'A';
	cout << ch << endl;

	cout << "char字符形變量所佔內存:  " << sizeof(char) << endl;

	//字元變數對應ASCII編碼
	//a-97 
	//A-65
	cout << (int)ch << endl;
	system("pause");

	return 0;
}