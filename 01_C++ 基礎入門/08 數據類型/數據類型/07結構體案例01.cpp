#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//學生的結構體
struct Student {
	
	//姓名
	string sName;
	//分數
	int score;

};



//老師的結構體定義
struct Teacher
{
	//姓名
	string tName;
	//學生數組
	struct Student sArray[5];
};

//給老師和學生賦值的函數
void allocateSpace(struct Teacher tArray[],int len) {
	
	string nameSeed = "ABCDE";
	//給老師開始賦值
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//通過循環給每名老師所帶的學生賦值
		for (int j = 0; j < 5; j++) {

			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 61 +40;
			tArray[i].sArray[j].score = random;
		}
	
	}
}

//輸出所有訊息
void printInfo(struct Teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "老師姓名:  " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {
			cout << "\t學生姓名:  " << tArray[i].sArray[j].sName << 
				" 考試分數:  "<<tArray[i].sArray[j].score<<endl;
		}
	}
}

int main7() {

	//隨機數種子
	srand((unsigned int)time(NULL));

	//1.創建3名老師的數組
	struct Teacher tArray[3];

	//2.通過函數給3名老師的信息賦值,並給老師帶的學生信息賦值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3.輸出所有老師及所帶的學生信息
	printInfo(tArray, len);

	system("pause");
	return 0;
}