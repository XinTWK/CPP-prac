#include <iostream>
#include <string>
using namespace std;

//1. 設計英雄的結構體
//英雄結構體
struct Hero
{
	//姓名
	string name;
	//年齡
	int age;
	//性別
	string sex;
};

//泡沫排序 實現年齡升序排列
void bubbleSort(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果 j下標的元素年齡 大於 j+1下標的元素的年齡,交換兩個元素
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}


//
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
			cout << "姓名:  " << heroArray[i].name << " 年齡:  " << heroArray[i].age 
			<< " 性別:  " << heroArray[i].sex << endl;
	}
}



int main8() {

	//2. 創建數組存放5名英雄
	struct Hero heroArray[5] =
	{
		{"劉備",23,"男"},
		{"關羽",22,"男" },
		{"張飛",20,"男" },
		{"趙雲",21,"男" },
		{"貂蟬",19,"女" },
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前的輸出:  " << endl;
	for (int i = 0;i < len; i++)
	{
		cout << "姓名:  " << heroArray[i].name << " 年齡:  " << heroArray[i].age 
			<< " 性別:  " << heroArray[i].sex << endl;
	}

	//3.對數組進行排序,按照年齡進行升序排序
	bubbleSort(heroArray,len);
	
	cout << "排序後的輸出:  " << endl;

	//4.將排序後結果輸出
	printHero(heroArray, len);


	system("pause");
	return 0;

}