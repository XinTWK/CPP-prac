#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <fstream> // 頭文件包含


// 文本文件 寫文件

void test01()
{
	// 1. 包含頭文件 fstream

	// 2. 創建流對象

	ofstream ofs;

	// 3. 指定打開方式
	ofs.open("test.txt", ios::out);

	// 4. 寫內容
	ofs << "姓名: 張三" << endl;
	ofs << "性別: 男" << endl;
	ofs << "年齡: 18" << endl;

	// 5. 關閉文件
	ofs.close();

}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
