#include <iostream>
#include <string> //c++
using namespace std;

int main6() {
	//1. C風格字串
	// 注意事項   char 字串要加[]
	//注意事項2   等號後面要用雙引號 包含起來字串
	char str[] = "hello world";
	cout << str << endl;

	//2. C++風格字串
	// 需開頭 #include<string>

	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");

	return 0;
}