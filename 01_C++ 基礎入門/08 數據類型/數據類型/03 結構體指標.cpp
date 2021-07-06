#include <iostream>
#include <string>
using namespace std;

//結構體指標
//定義學生結構體
struct student
{
	string neame; //姓名
	int age;      //年齡
	int score;    //分數
};

int main3() {

	// 1.創建學生結構體變數
	student s = { "張三",18,100 };
	
	// 2.通過指標指向結構體變數
	student * p = &s;

	// 3.通過指標訪問結構體變數中的數據
	// 通過結構體指標 訪問結構體中的屬性, 需要利用 ' -> '
	cout << "姓名: " << p->neame << " 年齡: " << p->age << " 分數: " << p->score << endl;



	system("pause");

	return 0;
}