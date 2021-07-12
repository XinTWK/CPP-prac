#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 判斷用戶輸入的訊息是字串還是數字




void test01()
{
	cout << "請輸入一個數字或字串: " << endl;

	char ch = cin.peek();
	if (ch >= '0' && ch<='9')
	{
		int num;
		cin >> num;
		cout << "您輸入的是數字: " << num << endl;
	}
	else
	{
		char buf[1024] = { 0 };
		cin >> buf;
		cout << "您輸入的是字串: " << buf << endl;
	}

}

int main() {


	test01();
	system("pause");

	return EXIT_SUCCESS;
}
