#include <iostream>
using namespace std;
#include <string>
//const的使用場景

struct student
{
	string name;
	int age;
	int score;
};

void printStudents(const student *s) {
	//s->age = 150;
	cout << "姓名:  " << (*s).name << " 年齡:  " << s->age << " 得分:  " << s->score << endl;
}

int main6() {

//創建結構體變數
	struct student s = { "張三",15,70 };

	//通過函數來輸出結構體變數訊息
	printStudents(&s);

	cout << "main中張三年齡為:  " << s.age << endl;


	system("pause");

	return 0;
}