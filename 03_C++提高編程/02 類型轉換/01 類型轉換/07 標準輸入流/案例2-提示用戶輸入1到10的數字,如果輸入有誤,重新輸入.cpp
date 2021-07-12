#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test01()
{
	cout << "請輸入1到10之間的數字: " << endl;

	while (true)
	{
		int num;
		cin >> num;
		if (num >= 1 && num <= 10)
		{
			cout << "輸入正確! 輸入的數字為: " << num << endl;
			break;
		}
		cout << "輸入有誤,請重新輸入" << endl;

		// 1. 重置標誌位
		cin.clear();
		// 2. 刷新緩衝區
		//cin.sync(); // vs2015以上不能用了, 需要手動取出緩衝區的內容, 可以使用cin.getline取走 
		              //或是 cin.ignore
		char buf[1024] = { 0 };
		cin.getline(buf, 1024);
		
		//cin.ignore(1024, '\n');

		//cout << "標誌位: " << cin.fail() << endl; // 0 正常  1 異常

	}

	


}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
