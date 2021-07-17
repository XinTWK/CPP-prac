#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 字串比較

void test01()
{
	string str1 = "xello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 等於 str2" << endl;
	}
	else if (str1.compare(str2)>0)
	{
		cout << "str1 大於 str2" << endl;
	}
	else
	{
		cout << "str1 小於 str2" << endl;
	}

// 字串對比主要是用於比較兩個字串是否箱等, 判斷誰大誰小的意義並不是很大

}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

