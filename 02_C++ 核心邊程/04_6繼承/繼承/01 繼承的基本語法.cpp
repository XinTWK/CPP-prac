#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 普通實現頁面

// Java頁面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首頁, 公開課, 登錄, 註冊.... (公共頭部)" << endl;
//	}
//	void footer()
//	{
//		cout << "幫助中心, 交流合作, 站內地圖... (公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java, Python, C++..... (公共分類列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Java學科影片" << endl;
//	}
//};
//
//// Python頁面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首頁, 公開課, 登錄, 註冊.... (公共頭部)" << endl;
//	}
//	void footer()
//	{
//		cout << "幫助中心, 交流合作, 站內地圖... (公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java, Python, C++..... (公共分類列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Python學科影片" << endl;
//	}
//};
//
//// C++ 頁面
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首頁, 公開課, 登錄, 註冊.... (公共頭部)" << endl;
//	}
//	void footer()
//	{
//		cout << "幫助中心, 交流合作, 站內地圖... (公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java, Python, C++..... (公共分類列表)" << endl;
//	}
//	void content()
//	{
//		cout << "C++學科影片" << endl;
//	}
//};

// 繼承實現頁面

// 公共頁面類
class BasePage
{
public:
	void header()
	{
		cout << "首頁, 公開課, 登錄, 註冊.... (公共頭部)" << endl;
	}
	void footer()
	{
		cout << "幫助中心, 交流合作, 站內地圖... (公共底部)" << endl;
	}
	void left()
	{
		cout << "Java, Python, C++..... (公共分類列表)" << endl;
	}

};

// 繼承的好處: 減少重複程式碼
// 語法:  class  子類:  繼承方式  父類
// 子類  也稱為  派生類
// 父類  也稱為  基類

// Java 頁面
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java學科影片" << endl;
	}
};

// Python 頁面
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python學科影片" << endl;
	}
};

// C++ 頁面
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++學科影片" << endl;
	}
};


	void test01()
	{
		cout << "Java下載影片如下:  " << endl;
		Java ja;
		ja.header();
		ja.footer();
		ja.left();
		ja.content();

		cout << "------------------------------------" << endl;

		cout << "Python下載影片如下:  " << endl;
		Python py;
		py.header();
		py.footer();
		py.left();
		py.content();

		cout << "------------------------------------" << endl;

		cout << "C++下載影片如下:  " << endl;
		CPP cpp;
		cpp.header();
		cpp.footer();
		cpp.left();
		cpp.content();
	}


	int main() {

		test01();

		system("pause");

		return EXIT_SUCCESS;
	}

