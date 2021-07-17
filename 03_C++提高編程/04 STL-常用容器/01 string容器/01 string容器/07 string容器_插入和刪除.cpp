#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// 字串 插入和刪除

void test01()
{
	string str = "hello";

	// 插入
	str.insert(1, "111");
	// hello -> h111ello
	cout << "str = " << str << endl;

	// 刪除
	str.erase(1, 3); // 從1號位置開始3個字符
	cout << "str = " << str << endl;
}


int main() {


	test01();
	system("pause");

	return EXIT_SUCCESS;
}

