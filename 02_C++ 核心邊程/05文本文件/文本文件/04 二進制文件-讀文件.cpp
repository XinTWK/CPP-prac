#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<fstream>

class Person
{
public:

	char m_Name[64]; // 姓名
	int m_Age; // 年齡
};


// 二進制文件  讀文件

void test01()
{
	// 1. 包含頭文件

	// 2. 創建流對象
	ifstream ifs;

	// 3. 打開文件  判斷文件是否打開成功
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打開失敗" << endl;
		return;
	}

	// 4. 讀文件
	Person p;

	ifs.read((char *)&p, sizeof(Person));
	
	cout << "姓名:  " << p.m_Name << " 年齡:  " << p.m_Age << endl;

	// 5. 關閉文件
	ifs.close();
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
