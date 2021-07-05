#include <iostream>
#include <string>
using namespace std;

//定義學生結構體
struct student
{
	string name;	//姓名
	int age;		//年齡
	int score;		//分數
};


//定義老師結構體
struct teacher
{
	int id;				//教師編號
	string name;		//教師姓名
	int age;			//年齡
	struct student stu; //輔導的學生
};


int main4() {

	//結構體嵌套結構體
	//創建老師
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老師姓名: " << t.name << " 老師編號: " << t.id << " 老師年齡: " << t.age
		<< " 老師輔導的學生姓名: " << t.stu.name << " 學生年齡:" << t.stu.age
		<< " 學生分數: " << t.stu.score << endl;

	system("pause");

	return 0;
}