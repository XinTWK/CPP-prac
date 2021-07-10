#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 標準輸入流


/*
cin.get() // 一次只能讀取一個字符
cin.get(一個參數) // 讀一個字符
cin.get(兩個參數) // 可以讀字串
cin.getline()
cin.ignore()
cin.peek()
cin.putback()
*/

void test01()
{
	// 輸入as  第一次 a  第二次 s  第三次 \n  第四次  等待下次輸入
	char ch;
	ch = cin.get();
	cout << "ch =  " << ch << endl;
	
	ch = cin.get();
	cout << "ch =  " << ch << endl;

	ch = cin.get();
	cout << "ch =  " << ch << endl;

	ch = cin.get();
	cout << "ch =  " << ch << endl;
}

void test02()
{
	// cin.get(一個參數) // 讀一個字符
	//char ch;
	//cin.get(ch);
	//cout << "ch =  " << ch << endl;

	//cin.get(兩個參數) // 可以讀字串
	char buf[1024] = { 0 }; 
	cin.get(buf, 1024); // 換行符會遺留在緩衝區中

	char ch;
	ch = cin.get();
	if (ch == '\n')
	{
		cout << "換行符遺留在緩衝區中" << endl;
	}
	else
	{
		cout << "換行符沒有遺留在緩衝區中" << endl;
	}

	cout << "buf = " << buf << endl;
	
}

void test03()
{
	char buf[1024] = { 0 };
	cin.getline(buf, 1024); // 換行符不會遺留在緩衝區中

	char ch;
	ch = cin.get();
	if (ch == '\n')
	{
		cout << "換行符遺留在緩衝區中" << endl;
	}
	else
	{
		cout << "換行符沒有遺留在緩衝區中" << endl;
	}

	cout << "buf = " << buf << endl;

}

void test04()
{
	// cin.ingnore() 忽略
	cin.ignore(2); // 默認會忽略緩衝區中的一個字符, 可以利用重載的版本 指定忽略的個數
	char ch = cin.get();
	cout << "ch =  " << ch << endl;

}

void test05()
{
	//cin.peek()  偷窺
	char ch = cin.peek();
	cout << "ch =  " << ch << endl;
	ch = cin.get();
	cout << "ch =  " << ch << endl;

}

void test06()
{
	// cin.putback() 放回
	char ch = cin.get();
	cin.putback(ch); // 將字符放回到起始位置

	char buf[1024] = { 0 };
	cin.getline(buf, 1024);
	cout << "buf = " << buf << endl;

}




int main() {

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();


	system("pause");

	return EXIT_SUCCESS;
}
