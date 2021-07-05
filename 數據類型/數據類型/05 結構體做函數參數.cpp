#include<iostream>
#include <string>
using namespace std;

//定義學生結構體
struct student
{
	string name; //姓名
	int age;	//年齡
	int score;	//分數
};

//輸出學生信息函數
//1.值傳遞
void printStudent1(struct student s ){
	s.age = 100;
	cout << "子函數中 姓名: " << s.name << " 年齡: " << s.age << " 分數: " << s.score << endl;
}

//2.地址傳遞
void printStudent2(struct student * p) {
	p->age = 200;
	cout << "子函數2中 姓名:" << (*p).name << " 年齡: " << p->age << " 分數: " << p->score << endl;
}

int main5() {

	//結構體做函數參數
	//將學生傳入到一個參數中,輸出學生身上的所有訊息

	//創建結構體變數
	struct student s;
	s.name = "張三";
	s.age = 20;
	s.score = 85;


	//printStudent1(s);
	printStudent2(&s);

	cout << "main函數中輸出 姓名: " << s.name << " 年齡: " << s.age << " 分數: " << s.score << endl;

	system("pause");

	return 0;
}