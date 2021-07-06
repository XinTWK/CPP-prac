#include <iostream>
#include<string>
using namespace std;


int main8() {

	//二維陣列案例-考試成績統計

	//1.創建二維陣列
	int scores[3][3] = 
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "張三","李四","王五" };

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
			//cout << scores[i][j] << " ";
		}
		cout << names[i] << "的總分為:  " << sum << endl;
	}
	

	//2.統計每個人的總和分數


	system("pause");

	return 0;
}