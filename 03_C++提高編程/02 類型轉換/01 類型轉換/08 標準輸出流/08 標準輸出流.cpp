#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<iomanip> // io man ip

/*
cout.put() // 向緩衝區寫字符
cout.write() // 從buffer中寫num個字節到當前輸出流中
*/

void test01()
{
	//cout.put('h').put('e').put('l');

	//char buf[1024] = "hello world";
	//cout.write(buf, strlen(buf));

	cout << "hello world" << endl;

}

void test02()
{
	int number = 99;
	cout.width(5); // 設置寬度
	cout.fill('*'); // 設置填充
	cout.setf(ios::left); // 設置左對齊
	cout.unsetf(ios::dec); // 卸載十進制
	cout.setf(ios::hex); // 安裝十六進制
	cout.setf(ios::showbase); // 顯示進制基數
	cout.unsetf(ios::hex); // 卸載十六進制
	cout.setf(ios::oct); // 安裝八進制
	cout << number << endl;
}

// 使用控制符
void test03()
{

	int number = 99;
	cout << setw(20) // 設置寬度
		<< setfill('~') // 設置填充
		<< setiosflags(ios::showbase) // 顯示基數
		<< setiosflags(ios::left) // 設置左對其
		<< hex // 安裝十六進制
		<< number
		<< endl;


}



int main() {

	//test01();
	//test02();
	test03();

	system("pause");

	return EXIT_SUCCESS;
}
