#include<iostream>
using namespace std;

// 對象的初始化和清理
// 1.構造函數 進行初始化操作
class Person
{
public:
	// 1. 構造函數
	// 沒有返回值 不用寫void
	// 函數名 與類名相同
	// 構造函數可以有參數, 可以發生重載
	// 創建對象的時候, 構造函數會自動調用, 而且只調用一次

	Person()
	{
		cout << "Person構造函數的調用" << endl;
	}

	// 2.析構函數 進行清理的操作
	// 沒有返回值 不寫void
	// 函數明和類名相同 在名稱前加 ~
	// 析構函數不可以有參數的, 不可以發生重載
	// 對象在銷毀前 會自動調用析構函數, 而且只會調用一次
	~Person()
	{
		cout << "Person 的析構函數調用" << endl;
	}

};


// 構造和析構都是必須有的實現, 如果我們自己不提供, 編譯器會提供一個空實現的構造和析構
void test01()
{
	Person p; //在棧上的數據, test01執行完畢後, 釋放這個對象
}

int main() {

	test01();

	//Person p;

	system("pause");

	return 0;
}