#include <iostream>
#include <string>
using namespace std;

//結構體陣列
// 1.定義結構體
struct Student
{
	//姓名
	string name;
	//年齡
	int age;
	//分數
	int score;
};


int main2() {


// 2.創建結構體陣列
	struct Student stuArray[3]=
	{
		{"張三",18,100},
		{"李四",28, 99},
		{"王五",38, 66}
	};

// 3.給結構體陣列中的元素賦值
	stuArray[2].name = "趙六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

// 4.遍歷結構體陣列
	for (int i = 0; i < 3; i++) {
		cout << "姓名: " << stuArray[i].name 
			 << " 年齡: " << stuArray[i].age
			 << " 分數: " << stuArray[i].score << endl;
	}



	system("pause");

	return 0;
}