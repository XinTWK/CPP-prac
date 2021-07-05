#include<iostream>
#include<string>
using namespace std;

// 1.創建學生數據類型 : 學生包刮 (姓名, 年齡, 分數)
// 自訂義數據類型, 一些類型集合組成的一個類型
// 語法 struct 類型名稱 { 成員列表 }
struct Student
{
	//成員列表

	//姓名
	string name;
	//年齡
	int age;
	//分數
	int score;

}s3;//順便創建結構體變輛

// 2.通過學生類型創建具體學生


int main1() {

// 2.1 struct Student s1
	//struct 關鍵是可以省略
	struct Student s1;
	//給s1屬性賦值,通過 訪問結構體變數中的屬性
	s1.name = "張三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名: " << s1.name << " 年齡: " << s1.age << " 分數: " << s1.score << endl;


// 2.2 struct Student s2 = { ... }
	struct Student s2{"李四",19,80};
	cout << "姓名: " << s2.name << " 年齡: " << s2.age << " 分數: " << s2.score << endl;

// 2.3 在定義結構體時順便創建結構體變量

	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名: " << s3.name << " 年齡: " << s3.age << " 分數: " << s3.score << endl;


	system("pause");

	return 0;
}