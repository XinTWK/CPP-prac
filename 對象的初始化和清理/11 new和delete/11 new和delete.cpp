#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person的默認構造函數調用" << endl;
	}

	Person(int a)
	{
		cout << "Person的有參構造函數調用" << endl;
	}

	Person(const Person & p)
	{
		cout << "Person的拷貝構造函數調用" << endl;
	}

	~Person()
	{
		cout << "Person的析構函數調用" << endl;
	}

};

// malloc 和 new 的區別?
// 1. malloc 和 free 屬於庫函數         new 和 delete 屬於運算符
// 2. malloc返回的是void *              new 返回的是對應 數據類型的指針
// 3. malloc對應的是free				new 對應的是delete
// 4. malloc不會調用構造函數			new 會調用構造函數
// 5. free 不會調用析構函數				delete 會調用析構函數
// 6. malloc計算分配內存大小			new 不需要

void test01()
{
	//Person p; // 在棧上創建對象

	// 在堆區創建對象
	Person * p1 = new Person;

	// 釋放
	delete p1;
}

// 注意事項:	不要利用void *  接受new出來的對象  原因:  不會執行析構函數

void test02()
{
	void * p = new Person;

	delete p;
}

// 在堆區開闢陣列

void test03()
{
	//malloc(sizeof(int) * 10); // C語言
	int *pInt = new int[10];

	char * pChar = new char[64];

	// 如果在堆去開闢自訂義類型的陣列, 這個類型必須有默認構造函數
	Person * persons = new Person[10] ;

	// 釋放堆區陣列
	delete [] persons;
}

// 在棧上開闢陣列的時候, 可以沒有默認構造
void test04()
{
	Person pArr[3] = { Person(10),Person(10),Person(10) };
}

int main() {

	test03();

	system("pause");

	return EXIT_SUCCESS;
}