#include <iostream>
#include<string>
using namespace std;

int main8() {
	// 1.整數
	int a = 0;
	cout << "請給整數變數a賦值:  " << endl;
	cin >> a;
	cout << "整數變量a= " << a << endl;

	//2.浮點數
	float f = 3.14f;
	cout << "請給浮點數變數f賦值: " << endl;
	cin >> f;
	cout << "浮點數變數f= " << f << endl;
	
	//3.字元
	char ch = 'a';
	cout << "請給字元變數ch賦值:" << endl;
	cin >> ch;
	cout << "字元ch= " << ch << endl;
	

	//4.字串
	string str = "hello";
	cout << "請給字串 str賦值:" << endl;
	cin >> str;
	cout << "字符串str =  " << str << endl;
	

	//5.bollen
	bool flag = false;
	cout << "請給布林 flag 賦值:" << endl;
	cin >> flag;
	cout << "布林類型flag= " << flag << endl;



	system("pause");
	return 0;
}