#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
// 異常的基本語法
// 異常的三個關鍵字 try caych theow


// 異常也可以是自訂義的類
class myException
{
public:
	void printError()
	{
		cout << "我自己的異常" << endl;
	}

};

int myDivision(int a,int b)
{
	if (b == 0)
	{
		//return -1; // C語言返回值只有一個, 無法區分, 可能出現二義性, 其次沒有統一的標誌

		//throw 1;    // 拋出一個int異常
		//throw 3.14; // 拋出一個double異常
		//throw 'a';  // 拋出一個char異常
		throw myException();  // 拋出一個 myException匿名的異常對象
	}
	return a / b;
}


void test01()
{
	int a = 10;
	int b = 0;

	// 在可能出現異常的地方 寫到try裡
	try
	{
		int ret = myDivision(a, b);

	}
	catch (int)
	{
		cout << "int類型異常捕獲" << endl;
	}
	catch (double)
	{
		// 如果捕獲到的異常, 不想去處理, 想繼續拋出, 可以利用關鍵字 throw
		throw;
		cout << "double類型異常捕獲" << endl;
	}
	catch (myException e)
	{
		e.printError();
	}
	catch (...)
	{
		cout << "其他類型異常捕獲" << endl;
	}
}

int main() {

	try
	{
		test01();

	}

	catch(int)
	{
		cout << "在main函數中,int類型異常捕獲" << endl;
	}
	catch (...)
	{
		cout << "在main函數中,其他類型異常捕獲" << endl;
	}

	// 如果程式中沒有任何地方去處理異常, 系統會自動調用terminate函數, 使程式終止

	system("pause");

	return EXIT_SUCCESS;
}

